// rea decompile_all
// name: FUN_0045baa0
// address: 0x45baa0
// body: available
// range: 0x45baa0-0x45bb75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045baa0(void)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int *local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007008a4;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) != 0) {
    FUN_00459b10(in_ECX);
    local_8 = 0;
    if ((local_14 != '\0') &&
       (pcVar1 = *(code **)(**(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) + 0x34),
       pcVar1 != FUN_00407870)) {
      iVar5 = (*pcVar1)(uVar4);
      if (iVar5 == -1) {
        iVar5 = *(int *)(*in_ECX + 4);
        uVar4 = *(uint *)((int)in_ECX + iVar5 + 0xc) | 4;
        if (*(int *)((int)in_ECX + iVar5 + 0x38) != 0) {
          uVar4 = *(uint *)((int)in_ECX + iVar5 + 0xc);
        }
        FUN_0044e870(uVar4 | 4,0);
      }
    }
    local_8 = 1;
    cVar3 = thunk_FUN_004c1d22();
    if (cVar3 == '\0') {
      FUN_0045bb80();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar2 = *(int **)(*(int *)(*local_18 + 4) + 0x38 + (int)local_18);
    if ((piVar2 != (int *)0x0) && (pcVar1 = *(code **)(*piVar2 + 8), pcVar1 != guard_check_icall)) {
      (*pcVar1)();
    }
  }
  ExceptionList = local_10;
  return;
}

