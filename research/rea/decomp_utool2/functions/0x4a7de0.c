// rea decompile_all
// name: FUN_004a7de0
// address: 0x4a7de0
// body: available
// range: 0x4a7de0-0x4a7fdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a7de0(char param_1,float param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  int *in_ECX;
  undefined8 uVar6;
  undefined1 local_30 [16];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703a72;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((DAT_00c8a690 != 0) && (uVar3 = GetMessageExtraInfo(), (uVar3 & 0xffffff80) == 0xff515780)) {
    ExceptionList = local_10;
    return;
  }
  if (*(char *)((int)in_ECX + 0x5a) == '\0') {
    *(undefined1 *)((int)in_ECX + 0x5a) = 1;
    if (param_1 != '\0') {
      FUN_00687140();
    }
    FUN_004a63b0();
    local_30._0_4_ = 0x10;
    local_30._4_4_ = 2;
    local_30._12_4_ = 0;
    local_30._8_4_ = in_ECX[0xe];
    TrackMouseEvent((LPTRACKMOUSEEVENT)local_30);
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    FUN_006cb390((int)&local_20 + 4);
    FUN_0048f720(1);
  }
  else if (*(char *)((int)in_ECX + 0x59) == '\0') {
    local_30._8_8_ = (double)param_3 + 6755399441055744.0;
    local_20 = (double)param_2 + 6755399441055744.0;
    cVar1 = (**(code **)(*in_ECX + 0x48))((undefined4)local_20,local_30._8_4_,0,uVar2);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return;
    }
  }
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00d00028) &&
     (FUN_004c0391(&DAT_00d00028), DAT_00d00028 == -1)) {
    iVar4 = FUN_006311d0();
    DAT_00d00018 = 0x10;
    if (0x202 < iVar4) {
      DAT_00d00018 = 0;
    }
    FUN_004c0352(&DAT_00d00028);
  }
  DVar5 = timeGetTime();
  if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar5;
  }
  if (DAT_00c8ab20 + DAT_00d00018 <= DVar5) {
    DAT_00c8ab20 = DVar5;
    uVar6 = FUN_00687700(param_2,param_3);
    FUN_0068d900(0,DAT_00c8a9dc,uVar6,param_2,param_3);
  }
  ExceptionList = local_10;
  return;
}

