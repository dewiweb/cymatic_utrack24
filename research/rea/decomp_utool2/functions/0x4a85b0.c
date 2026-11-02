// rea decompile_all
// name: FUN_004a85b0
// address: 0x4a85b0
// body: available
// range: 0x4a85b0-0x4a86d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a85b0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  HWND hWnd;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Memory;
  int in_ECX;
  void *pvVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703a98;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(byte *)(in_ECX + 8) & 4) != 0) &&
     (hWnd = GetParent(*(HWND *)(in_ECX + 0x38)), hWnd != (HWND)0x0)) {
    LVar3 = GetWindowLongW(hWnd,-0x15);
    iVar4 = FUN_00462d70();
    if ((LVar3 == iVar4) && ((LVar3 = GetWindowLongW(hWnd,8), LVar3 != 0 && (LVar3 != in_ECX)))) {
      uVar5 = FUN_004a85b0(param_1,param_2);
      ExceptionList = local_10;
      return uVar5;
    }
  }
  _Memory = (void *)FUN_004c554b(param_1 * 0x28,uVar2);
  local_8 = 0;
  iVar4 = (*DAT_00c8a688)(param_2,param_1,_Memory,0x28);
  if ((iVar4 != 0) && (iVar4 = 0, pvVar6 = _Memory, 0 < param_1)) {
    do {
      uVar2 = *(uint *)((int)pvVar6 + 0x10);
      if (((uVar2 & 7) != 0) &&
         (cVar1 = FUN_004a86e0(pvVar6,(byte)(uVar2 >> 1) & 1,(byte)(uVar2 >> 2) & 1), cVar1 == '\0')
         ) goto LAB_004a86b4;
      iVar4 = iVar4 + 1;
      pvVar6 = (void *)((int)pvVar6 + 0x28);
    } while (iVar4 < param_1);
  }
  (*DAT_00c8a684)(param_2);
LAB_004a86b4:
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return 0;
}

