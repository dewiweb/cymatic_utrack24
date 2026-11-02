// rea decompile_all
// name: FUN_00019dd4
// address: 0x19dd4
// body: available
// range: 0x19dd4-0x1a043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00019dd4(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  int local_res10 [2];
  longlong local_res18 [2];
  
  lVar8 = DAT_00029268 + 0x18;
  KeWaitForSingleObject(lVar8,0,0,0,0);
  if (*(longlong **)(DAT_00029268 + 0xd0) != (longlong *)(DAT_00029268 + 0xd0)) {
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,"Only one instance supported.");
    KeReleaseMutex(lVar8,0);
    return -0x3fffffff;
  }
  FUN_00014238();
  FUN_00014620();
  FUN_00019638((longlong)param_1);
  FUN_00019c40((longlong)param_1);
  FUN_0001a4ec((longlong)param_1);
  FUN_0001a6c8((longlong)param_1);
  FUN_0001a5c0((longlong)param_1);
  local_res18[0] = 0;
  iVar6 = FUN_000193d8((longlong)param_1,local_res18);
  if ((-1 < iVar6) && (iVar6 = FUN_000114d0(local_res18,L"EnableSynch",local_res10), -1 < iVar6)) {
    *(bool *)(param_1 + 0x362) = local_res10[0] != 0;
  }
  if (local_res18[0] != 0) {
    ZwClose();
  }
  FUN_0001b95c((longlong)param_1);
  puVar1 = param_1 + 0x363;
  iVar6 = FUN_0001b99c((longlong)param_1,1,puVar1);
  if (iVar6 < 0) {
    iVar6 = FUN_0001b99c((longlong)param_1,0,puVar1);
    if (-1 < iVar6) goto LAB_00019f0a;
  }
  else {
    param_1[0x36c] = (ulonglong)puVar1;
LAB_00019f0a:
    param_1[0x36d] = (ulonglong)puVar1;
  }
  if (iVar6 < 0) {
    pcVar9 = "GetDirectCallInterfaces failed.";
  }
  else {
    cVar5 = (**(code **)(param_1[0x36c] + 0x40))(*(undefined8 *)(param_1[0x36d] + 8));
    if (cVar5 == '\0') {
      iVar6 = -0x3fffffff;
      goto LAB_0001a02a;
    }
    iVar6 = FUN_00019cfc((longlong)param_1);
    if (-1 < iVar6) {
      if (*(char *)((longlong)param_1 + 0x1bb9) != '\0') {
        FUN_00012380((longlong)param_1);
        goto LAB_0001a02a;
      }
      iVar6 = FUN_0001bfc4(param_1);
      if (iVar6 < 0) {
        pcVar9 = "SetConfiguration failed.";
      }
      else {
        iVar7 = FUN_00017150(DAT_00029268 + 0x60);
        lVar4 = DAT_00029268;
        if (iVar7 < 0) {
          pcVar9 = "mStaticDevice.Enable failed.";
          goto LAB_00019f23;
        }
        puVar2 = *(ulonglong **)(DAT_00029268 + 0xd8);
        puVar1 = (ulonglong *)((longlong)param_1 + *(longlong *)(DAT_00029268 + 0xe0));
        uVar3 = *puVar2;
        puVar1[1] = (ulonglong)puVar2;
        *puVar1 = uVar3;
        *(ulonglong **)(*puVar2 + 8) = puVar1;
        *puVar2 = (ulonglong)puVar1;
        iVar6 = FUN_00014cc0(lVar4,0,(ulonglong)puVar1);
        if (-1 < iVar6) {
          FUN_00015e00(DAT_00029268,3,0,0,3);
          goto LAB_0001a02a;
        }
        pcVar9 = "StartAllDevices failed.";
      }
      FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar9);
      iVar6 = 0;
      goto LAB_0001a02a;
    }
    pcVar9 = "Get DFU Mode failed.";
  }
LAB_00019f23:
  FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar9);
LAB_0001a02a:
  KeReleaseMutex(lVar8,0);
  return iVar6;
}

