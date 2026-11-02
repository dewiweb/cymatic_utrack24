// rea decompile_all
// name: FUN_00406c10
// address: 0x406c10
// body: available
// range: 0x406c10-0x406cc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406c10(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  *in_ECX = r8b::CDSPBlockConvolver::vftable;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7b0);
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7b0);
  FID_conflict__free((void *)in_ECX[0x13]);
  piVar2 = (int *)in_ECX[3];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
      piVar3[4] = *(int *)(&DAT_00c8a7e8 + *piVar3 * 4);
      *(int **)(&DAT_00c8a7e8 + *piVar3 * 4) = piVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
    }
    FID_conflict__free(piVar2);
  }
  piVar2 = (int *)in_ECX[2];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
      piVar3[4] = *(int *)(&DAT_00c8a7e8 + *piVar3 * 4);
      *(int **)(&DAT_00c8a7e8 + *piVar3 * 4) = piVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a7cc);
    }
    FID_conflict__free(piVar2);
  }
  *in_ECX = r8b::CDSPProcessor::vftable;
  return;
}

