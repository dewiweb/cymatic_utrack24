// rea decompile_all
// name: FUN_0055b420
// address: 0x55b420
// body: available
// range: 0x55b420-0x55b55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0055b420(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  uint local_14;
  uint local_10;
  undefined1 local_9;
  short local_8;
  
  local_9 = 0;
  for (local_10 = 0; local_10 < *(ushort *)(in_ECX + 1); local_10 = local_10 + 1) {
    cVar1 = FUN_005034a0(param_1);
    if (((cVar1 != '\0') && (*(short *)(*in_ECX + 0xc + local_10 * 0x18) != 0)) &&
       (*(short *)(*in_ECX + 0xc + local_10 * 0x18) =
             *(short *)(*in_ECX + 0xc + local_10 * 0x18) + -1,
       *(short *)(*in_ECX + 0xc + local_10 * 0x18) == 0)) {
      *(undefined4 *)(*in_ECX + 0x10 + local_10 * 0x18) = 0;
      *(undefined1 *)(*in_ECX + 0x14 + local_10 * 0x18) = 0;
      FUN_00503650(&DAT_0095c848);
      local_9 = 1;
    }
  }
  local_8 = 0;
  for (local_14 = 0; local_14 < *(ushort *)(in_ECX + 1); local_14 = local_14 + 1) {
    if (*(short *)(*in_ECX + 0xc + local_14 * 0x18) != 0) {
      local_8 = local_8 + 1;
    }
  }
  if (local_8 == 0) {
    FUN_0055b560(2);
  }
  return local_9;
}

