// rea decompile_all
// name: FUN_00476e89
// address: 0x476e89
// body: available
// range: 0x476e89-0x476f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476e89(void)

{
  void **ppvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  ppvVar1 = (void **)(unaff_ESI + 5);
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  *(undefined1 *)(unaff_ESI + 4) = *(undefined1 *)(in_EAX + 4);
  if (ppvVar1 != (void **)(in_EAX + 5)) {
    FUN_004a4ad1(&local_10);
    if (ppvVar1 != &local_10) {
      pvVar3 = *ppvVar1;
      *ppvVar1 = local_10;
      local_10 = pvVar3;
    }
    puVar2 = unaff_ESI + 6;
    if (puVar2 != &local_c) {
      uVar4 = *puVar2;
      *puVar2 = local_c;
      local_c = uVar4;
    }
    puVar2 = unaff_ESI + 7;
    if (puVar2 != &local_8) {
      uVar4 = *puVar2;
      *puVar2 = local_8;
      local_8 = uVar4;
    }
    _free(local_10);
  }
  return;
}

