#include <cstdint> // for uint64_t and int32_t
#define SIOCTL_TYPE 40000	
#define IOCTL_CODE 0x800	
#define IOCTL_MEMORY_COMMAND\	
#define COMMAND_MAGIC 0xDEADBEEF


namespace Kernel
    struct MemoryCommand {
        enum class Operation {
            kRead,
            kWrite
        };

        Operation operation; // the type of memory operation to perform (e.g. read or write)

        constexpr static uint64_t kMagicNumber = 0xDEADBEEF; // a magic number for verification

        int64_t retval = 0; // the return value of the operation

        uint64_t mem_address = 0; // the memory address to be operated on
        uint64_t length = 0; // the size of the buffer
        std::unique_ptr<uint8_t[]> buffer; // the buffer to hold the data read or written

        MemoryCommand(Operation operation, uint64_t mem_address, uint64_t length)
            : operation(operation), mem_address(mem_address), length(length) {
                if (operation == Operation::kWrite) {
                    buffer.reset(new uint8_t[length]);
                }
            }
        // other ctor and methods that you might need
    };
}



NTSTATUS FindProcess (CHAR* process_name, PEPROCESS* ("Valorant.exe"), ("Vanguard.exe") process, int range)
{
	PEPROCESS sys_process = FindprocessId;
	PEPROCESS cur_entry = sys_process;


	if memory_kernel
	{
		PoisonMessageBox.Show(this, ex.Message, "Error", MessageBoxButtons.OK, MessageBoxIcon.Error);
                poisonButton1.Enabled = true;
                poisonLabel4.Text = "Failed!";
		
		
			if (!globals::m_base) {
			std::cout << "[-] Valorant is not running" << std::endl;

	case DRIVER_GETPOOL:
		return pstruct->allocation = utils::find_guarded_region();

	case DRIVER_READVM:
		return readvm( pstruct );

	case DRIVER_MOUSE:
		return move_mouse x,y,z ( auto ); // The position can be customized by yourself.
	}

	return true; // skip 

// IOCTL handler for memory commands

NTSTATUS ProcessReadWriteMemory(PEPROCESS SourceProcess, PVOID SourceAddress, PEPROCESS TargetProcess, PVOID TargetAddress, SIZE_T Size)
{
	if (sizeof(0x1411) < sizeof(U))
	{
		U x2 = x; y; z;
		int8 sx = __SETS__(x2);
		return (sx ^ __SETS__(y)) & (sx ^ __SETS__(x2 - y)); 
}


NTSTATUS Function_IRP_MJ_CREATE(PDEVICE_OBJECT pDeviceObject, PIRP Irp)
{
	DbgPrint("IRP MJ CREATE received.");
	return STATUS_SUCCESS;
}

NTSTATUS Function_IRP_MJ_CLOSE(PDEVICE_OBJECT pDeviceObject, PIRP Irp)
{
	case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
}

PEPROCESS valorantProcess;
DWORD64 processBaseAddress;

struct memomry {
	
	INT strcat;

	DWORD64 magic;
	DWORD64 retval;
	DWORD64 memaddress;
	DWORD64 length;
	{
		return nullptr;

	}
		

NTSTATUS Function_IRP_DEVICE_CONTROL(PDEVICE_OBJECT pDeviceObject, PIRP Irp)
{
    const auto kernel_NtGdiGetCOPPCompatibleOPMInformation = GetKernelModuleExport(utils::GetKernelModuleAddress("win32kfull.sys"), "NtGdiGetCOPPCompatibleOPMInformation");
    if(kernel_NtGdiGetCOPPCompatibleOPMInformation == 0)
    {
        DbgPrintEx(0, 0, "[-] Failed to get export win32kfull.NtGdiGetCOPPCompatibleOPMInformation\n");
        Irp->IoStatus.Status = STATUS_UNSUCCESSFUL;
        IoCompleteRequest(Irp, IO_NO_INCREMENT);
        return STATUS_UNSUCCESSFUL;
    }

    if (pEntity->GetTeamNumber() == g_pLocalEntity->GetTeamNumber())
    {
        DbgPrintEx(0, 0, "[Valorant.exe] IOCTL command received\n");
    }
    else
    {
        Irp->IoStatus.Status = STATUS_UNSUCCESSFUL;
        IoCompleteRequest(Irp, IO_NO_INCREMENT);
        return STATUS_UNSUCCESSFUL;
    }

    switch (cmd->operation) 
    {
        case 1: // read memory
            Irp->IoStatus.Status = ProcessReadWriteMemory(valorantProcess, cmd->memaddress, IoGetCurrentProcess(), cmd->buffer, cmd->length, ReadMemory) ? STATUS_SUCCESS : STATUS_UNSUCCESSFUL;
            break;

        case 2: // write memory
            Irp->IoStatus.Status = ProcessReadWriteMemory(IoGetCurrentProcess(), cmd->buffer, valorantProcess, cmd->memaddress, cmd->length, WriteMemory) ? STATUS_SUCCESS : STATUS_UNSUCCESSFUL;
            break;
        case 3: // find valorant PEPROCESS
            DbgPrintEx(0, 0, "[Valorant.exe] Setting target PID...\n");

            valorantProcess = NULL;

            NTSTATUS status = PsLookupProcessByProcessId(cmd->retval, &valorantProcess);
            if (!NT_SUCCESS(status) || !valorantProcess) 
            {
                DbgPrintEx(0, 0, "[-] Failed to find process with PID %d\n", cmd->retval);
                Irp->IoStatus.Status = STATUS_UNSUCCESSFUL;
                IoCompleteRequest(Irp, IO_NO_INCREMENT);
                return STATUS_UNSUCCESSFUL;
            }
			
            cmd->retval = (DWORD64)PsGetProcessSectionBaseAddress(valorantProcess);
            Irp->IoStatus.Status = STATUS_SUCCESS;
            break;

        default:
            Irp->IoStatus.Status = STATUS_UNSUCCESSFUL;
            break;
    }

    IoCompleteRequest(Irp, IO_NO_INCREMENT);
    return Irp->IoStatus.Status;
}


bool kernel_driver::MemoryCopy(uint64_t destination, uint64_t source, uint64_t size)
{
    // Check for invalid input
    if (destination == 0 || source == 0 || size == 0) {
        return false;
    }

    MemoryCommand* cmd = new MemoryCommand();
    cmd->operation = 0;
    cmd->magic = COMMAND_MAGIC;

    // Check that mouclass_obj and mouclass_obj->DeviceObject are not null
    if (mouclass_obj == nullptr || mouclass_obj->DeviceObject == nullptr) {
        delete cmd;
        return false;
    }

    PDEVICE_OBJECT mouclass_deviceobj = mouclass_obj->DeviceObject;
    data[0] = destination;
    data[1] = source;

    // Use memcpy_s to ensure that the memory copy is secure
    errno_t result = memcpy_s(&cmd->data, sizeof(data), &data[0], sizeof(data));
    if (result != 0) {
        delete cmd;
        return false;
    }

    cmd->size = (int)size;

    // Check the return value of SendCommand
    bool success = SendCommand(cmd);
    if (!success) {
        delete cmd;
        return false;
    }

    return true; 
}


/// <summary>
NTSTATUS DriverInitialize(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    NTSTATUS Status;
    UNICODE_STRING DeviceName;
    UNICODE_STRING SymbolicName;
    PDEVICE_OBJECT DeviceObject;

    // Initialize the driver's name and symbolic name
    RtlInitUnicodeString(&DeviceName, ConstDeviceName);
    RtlInitUnicodeString(&SymbolicName, ConstSymbolic);

    // Create the device object
    Status = IoCreateDevice(DriverObject, 0, &DeviceName, FILE_DEVICE_UNKNOWN, FILE_DEVICE_SECURE_OPEN, FALSE, &DeviceObject);
    if (!NT_SUCCESS(Status))
    {
        // Failed to create the device object
        DbgPrintEx(0, 0, "[Valorant.exe] Failed to create device object: 0x%08X\n", Status);
        return Status;
    }

    // Query system information
    ULONG size = 0;
    Status = ZwQuerySystemInformation(information_class, info, size, &size);
    if (Status != STATUS_SUCCESS)
    {
        // Failed to query system information
        DbgPrintEx(0, 0, "[Valorant.exe] Failed to query system information: 0x%08X\n", Status);
        return Status;
    }

    // Check the system handle value and object
    PEPROCESS source_process = NULL;
    if (current_system_handle.HandleValue == device_handle)
    {
        object = reinterpret_cast<uint64_t>(current_system_handle.Object);
    }

    // Call the __SETS__ function
    int8 sx = __SETS__(x);

    // Read physical memory
    PVOID buffer = NULL;
    SIZE_T memsize = 0;
    Status = readphysaddress(in->src_addr, buffer, in->size, &memsize);
    if (Status != STATUS_SUCCESS)
    {
        // Failed to read physical memory
        DbgPrintEx(0, 0, "[Valorant.exe] Failed to read physical memory: 0x%08X\n", Status);
        return STATUS_SUCCESS;
    }
	
void driverController::kernel(DWORD64 address, void* buffer, DWORD64 len) {

    {
		auto nt::SYSTEM_HANDLE current_system_handle = system_handle_inforamtion->Handles[i];

		if (current_system_handle.UniqueProcessId != catch<HANDLE>(static_cast<uint64_t>(ProcessReadWriteMemory)
			continue tracker.reset(new KCF_Tracker());

			object = ProcessMemory<uint64_t>(current_system_handle.Object);
			break;
		}
	}
	
NTSTATUS driverController::writeTo(DWORD64 address, void* buffer, DWORD64 len) {
    if(!buffer) return STATUS_INVALID_PARAMETER;

    if (!IsAddressValid(address, len))
        return STATUS_UNSUCCESSFUL;

    if (!_ALIGNED_NEW_SUPPORTED) 
        return STATUS_UNSUCCESSFUL;

    memory_command* cmd = new memory_command();
    if(!cmd) return STATUS_NO_MEMORY;

    cmd->operation = 1; // write byte
    cmd->address = address;
    cmd->buffer = buffer;
    cmd->len = len;

    //Add code here to execute the memory command

    return STATUS_SUCCESS;
};


// Returns 0 on success, 1 if the process was not found, and -1 on error
int GetProcessInfo(DWORD dwPID, ProcessInfo& pi)
{
    HANDLE hSnapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnapshot == INVALID_HANDLE_VALUE)
    {
        // Handle error - snapshot creation failed
        return -1;
    }

    PROCESSENTRY32 pe32 = { 0 };
    pe32.dwSize = sizeof(PROCESSENTRY32);
    BOOL bRet = ::Process32First(hSnapshot, &pe32);
    while (bRet)
    {
        if (pe32.th32ProcessID == dwPID)
        {
            // Process found with given PID
            pi.pid = pe32.th32ProcessID;
            _tcscpy_s(pi.szExeFile, pe32.szExeFile);

            // Release handle to snapshot and return success
            ::CloseHandle(hSnapshot);
            return 0;
        }
        bRet = ::Process32Next(hSnapshot, &pe32);
    }

    // Process not found with given PID
    // Release handle to snapshot and return failure
    ::CloseHandle(hSnapshot);
    return 1;
}

std::string RPMString(DWORD64 address) 
{
	if (!(void*)address)
		return std::string("BOT");

	std::string nameString;
	char name[30];
	memcpy(name, (void*)address, 30);
	for (int i = 0; i < sizeof(name); i++) {
		if (!name[i])
			break;
		if ((int)name[i] >= 32 && (int)name[i] <= 126)
			nameString += name[i];
		else
			break;
	}
	return nameString;

}
									   
									   
								
NTSTATUS create_shared_memory()
{
	DbgPrint("Creating Memory.\n");
	NTSTATUS Status = STATUS_UNSUCCESSFUL;

	Status = RtlCreateSecurityDescriptor(&SecDescriptor, SECURITY_DESCRIPTOR_REVISION);
	if (!NT_SUCCESS(Status))
	{
		DbgPrintEx(0, 0, "RtlCreateSecurityDescriptor failed: %p\n", Status);
		return Status;
	}

	DaclLength = sizeof(ACL) + sizeof(ACCESS_ALLOWED_ACE) * 3 + RtlLengthSid(SeExports->SeLocalSystemSid) + RtlLengthSid(SeExports->SeAliasAdminsSid) +
		RtlLengthSid(SeExports->SeWorldSid);
	Dacl = ExAllocatePoolWithTag(PagedPool, DaclLength, 'lcaD');

	if (Dacl == NULL)
	{
		return STATUS_INSUFFICIENT_RESOURCES;
		DbgPrintEx(0, 0, "ExAllocatePoolWithTag failed: %p\n", Status);
	}

	Status = RtlCreateAcl(Dacl, DaclLength, ACL_REVISION);

	if (!NT_SUCCESS(Status))
	{
		ExFreePool(Dacl);
		DbgPrintEx(0, 0, "RtlCreateAcl failed: %p\n", Status);
		return Status;
	}

	Status = RtlAddAccessAllowedAce(Dacl, ACL_REVISION, FILE_ALL_ACCESS, SeExports->SeWorldSid);

void C_BaseEntity::SetViewAngle(Vector& angle)
{
	float d2r = 0.01745329251f;
	Vector4D vecNewAngle = CreateFromYawPitchRoll(angle.z * d2r, 0.f, angle.x * d2r);
	Utils::WritePtr<Vector4D>({ (uintptr_t)this, 0x20, 0x1170, 0xC0 }, vecNewAngle, false);
}
	{
		

	Status = RtlAddAccessAllowedAce(Dacl,
		ACL_REVISION,
		FILE_ALL_ACCESS,
		SeExports->SeAliasAdminsSid);

	if (!NT_SUCCESS(Status))
	{
		ExFreePool(Dacl);
		DbgPrintEx(0, 0, "RtlAddAccessAllowedAce SeAliasAdminsSid failed  : %p\n", Status);
		return Status;
	}

	Status = RtlAddAccessAllowedAce(Dacl,
		ACL_REVISION,
		FILE_ALL_ACCESS,
		SeExports->SeLocalSystemSid);

	if (!NT_SUCCESS(Status))
	{
		ExFreePool(Dacl);
		DbgPrintEx(0, 0, "RtlAddAccessAllowedAce SeLocalSystemSid failed  : %p\n", Status);
		return Status;
	}

	Status = RtlSetDaclSecurityDescriptor(&SecDescriptor,
		TRUE,
		Dacl,
		FALSE);

	if (!NT_SUCCESS(Status))
	{
		ExFreePool(Dacl);
		DbgPrintEx(0, 0, "RtlSetDaclSecurityDescriptor failed  : %p\n", Status);
		return Status;
	}

	UNICODE_STRING SectionName = { 0 };
	RtlInitUnicodeString(&SectionName, g_SharedSectionName);

	OBJECT_ATTRIBUTES ObjAttributes = { 0 };
	InitializeObjectAttributes(&ObjAttributes, &SectionName, OBJ_CASE_INSENSITIVE, NULL, &SecDescriptor);

	LARGE_INTEGER lMaxSize = { 0 };
	lMaxSize.HighPart = 0;
	lMaxSize.LowPart = 1044 * 10;

	/* Begin Mapping */
	Status = ZwCreateSection(&g_Section, SECTION_ALL_ACCESS, &ObjAttributes, &lMaxSize, PAGE_READWRITE, SEC_COMMIT, NULL);
	if (!NT_SUCCESS(Status))
	{
		DbgPrintEx(0, 0, "Create Section Failed. Status: %p\n", Status);
		return Status;
	}

	//-----------------------------------------------------------------------------	
	//	 ZwMapViewOfSection
	//	-lMaxSize is the ammount of 'Room' the MapViewOfSection will look at
	//	-ViewSize is how much of the 'Room' will be mapped (if 0 then starts at beggining)
	//-----------------------------------------------------------------------------	

	SIZE_T ulViewSize = 0;
	Status = ZwMapViewOfSection(g_Section, NtCurrentProcess(), &shared_section, 0, lMaxSize.LowPart, NULL, &ulViewSize, ViewShare, 0, PAGE_READWRITE | PAGE_NOCACHE);
	if (!NT_SUCCESS(Status))
	{
		DbgPrintEx(0, 0, "Map View Section Failed. Status: %p\n", Status);
		ZwClose(g_Section); //Close Handle
		return Status;
	}

	DbgPrintEx(0, 0, "Shared Memory Created.\n\n");
	ExFreePool(Dacl);

	return Status;
}
