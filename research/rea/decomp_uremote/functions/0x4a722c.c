// rea decompile_all
// name: FUN_004a722c
// address: 0x4a722c
// body: available
// range: 0x4a722c-0x4a727e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a722c(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_EAX;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_ESI;
  
  if (param_1 < (uint)in_EAX[2]) {
    puVar5 = (undefined4 *)(param_1 * 0x10 + *in_EAX);
    uVar1 = puVar5[2];
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    uVar4 = puVar5[3];
    FUN_004f8132(param_1);
    unaff_ESI[2] = uVar1;
    *unaff_ESI = uVar2;
    unaff_ESI[1] = uVar3;
  }
  else {
    uVar4 = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
  }
  unaff_ESI[3] = uVar4;
  return;
}

