// rea decompile_all
// name: FUN_006f0750
// address: 0x6f0750
// body: available
// range: 0x6f0750-0x6f07f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0750(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  iVar2 = *(int *)(in_ECX[0x1f] + 8) + -1;
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (iVar3 < param_1) {
    param_1 = iVar3;
  }
  if (param_1 != in_ECX[0x21]) {
    in_ECX[0x21] = param_1;
    (**(code **)(*in_ECX + 0xd4))();
    FUN_006ece20(in_ECX[0x21]);
    iVar2 = in_ECX[0xbd];
    piVar4 = (int *)(*(int *)(iVar2 + 0x18) + 0xc);
    LOCK();
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      *piVar4 = 1;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
      LOCK();
      *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0xc) = 0;
      UNLOCK();
    }
    iVar2 = in_ECX[0xbd];
    piVar4 = (int *)(*(int *)(iVar2 + 0x18) + 0xc);
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = 0;
    UNLOCK();
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x14) + 4))();
    }
    (**(code **)(*in_ECX + 200))();
  }
  return;
}

