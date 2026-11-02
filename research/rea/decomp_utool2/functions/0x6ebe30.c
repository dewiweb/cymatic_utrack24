// rea decompile_all
// name: FUN_006ebe30
// address: 0x6ebe30
// body: available
// range: 0x6ebe30-0x6ebf6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ebe30(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int *)(in_ECX + 0xa0) != 0) {
    FUN_0049b400(param_1);
    FUN_0049b400(param_1);
    FUN_0049b400(param_1);
    FUN_0049b400(param_1);
  }
  if (*(int *)(in_ECX + 0xb0) != 0) {
    FUN_004b5110();
    (**(code **)(**(int **)(in_ECX + 0xb4) + 0x84))();
  }
  if ((*(byte *)(in_ECX + 0xc4) & 2) != 0) {
    FUN_006ceb30(*(undefined4 *)(in_ECX + 0xcc),*(undefined4 *)(in_ECX + 0xd0),
                 *(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8));
  }
  if ((param_1 != 0) && (0 < *(int *)(in_ECX + 0x88))) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x78) + 0xc);
    LOCK();
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      *piVar3 = 1;
      iVar2 = 0;
    }
    UNLOCK();
    if ((iVar2 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(in_ECX + 0x78) + 0xc) = 0;
      UNLOCK();
    }
  }
  if (param_1 == 2) {
    piVar3 = (int *)(*(int *)(in_ECX + 0x78) + 0xc);
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = 0;
    UNLOCK();
    if (iVar2 != 0) {
      (**(code **)(*(int *)(in_ECX + 0x74) + 4))();
    }
  }
  return;
}

