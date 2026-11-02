// rea decompile_all
// name: FUN_006addd0
// address: 0x6addd0
// body: available
// range: 0x6addd0-0x6ade84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006addd0(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  
  if ((param_1 < (uint)in_ECX[0x26]) && (iVar1 = *(int *)(in_ECX[0x24] + param_1 * 4), iVar1 != 0))
  {
    if (*(int *)(iVar1 + 4) != *param_2) {
      iVar2 = FUN_00448730(*(undefined4 *)(iVar1 + 4));
      if (iVar2 != 0) {
        piVar3 = (int *)(*param_2 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        LOCK();
        iVar2 = *(int *)(iVar1 + 4);
        *(int *)(iVar1 + 4) = *param_2;
        UNLOCK();
        piVar3 = (int *)(iVar2 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        FUN_006e54f0();
        if (*(code **)(*in_ECX + 0x84) == FUN_006ada90) {
          FUN_006ad390();
          return;
        }
        (**(code **)(*in_ECX + 0x84))();
      }
    }
  }
  return;
}

