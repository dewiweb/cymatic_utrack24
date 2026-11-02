// rea decompile_all
// name: FUN_0060d780
// address: 0x60d780
// body: available
// range: 0x60d780-0x60d807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060d780(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  float fVar4;
  float in_XMM1_Da;
  
  fVar4 = (float)in_ECX[0x48];
  if (((float)in_ECX[0x48] <= in_XMM1_Da) &&
     (fVar4 = (float)in_ECX[0x49], in_XMM1_Da <= (float)in_ECX[0x49])) {
    fVar4 = in_XMM1_Da;
  }
  fVar1 = (float)in_ECX[0x4a];
  if (fVar4 == fVar1) {
    return;
  }
  in_ECX[0x4a] = (int)fVar4;
  if (((int)fVar1 != (int)fVar4) && (0 < in_ECX[0x23])) {
    LOCK();
    iVar3 = *(int *)(in_ECX[0x1f] + 0xc);
    if (iVar3 == 0) {
      *(int *)(in_ECX[0x1f] + 0xc) = 1;
      iVar3 = 0;
    }
    UNLOCK();
    if ((iVar3 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
      LOCK();
      *(undefined4 *)(in_ECX[0x1f] + 0xc) = 0;
      UNLOCK();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0060d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x84))();
  return;
}

