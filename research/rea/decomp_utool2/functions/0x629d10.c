// rea decompile_all
// name: FUN_00629d10
// address: 0x629d10
// body: available
// range: 0x629d10-0x629e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00629d10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dcc6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0045c230(*in_ECX,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar1 < 0) {
    iVar1 = *in_ECX;
    *param_1 = iVar1;
    piVar2 = (int *)(iVar1 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_8 = 0;
    FUN_00455850(&DAT_00bfe12c);
    local_8 = 1;
    do {
      iVar1 = FUN_00443260();
      if (iVar1 == param_2) {
        iVar1 = param_3;
      }
      FUN_00455c30(iVar1);
    } while (iVar1 != 0);
    *param_1 = param_2;
    piVar2 = (int *)(param_2 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

