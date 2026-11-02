// rea decompile_all
// name: FUN_00512930
// address: 0x512930
// body: available
// range: 0x512930-0x512a45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00512930(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int local_10;
  
  iVar1 = FUN_00512ad0(param_1);
  if (iVar1 < 0) {
    if (*(ushort *)((int)in_ECX + 6) <= *(ushort *)(in_ECX + 1)) {
      iVar1 = FUN_005b04d6((*(ushort *)((int)in_ECX + 6) + 10) * 4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      if (*in_ECX != 0) {
        for (local_10 = 0; local_10 < (int)(uint)*(ushort *)(in_ECX + 1); local_10 = local_10 + 1) {
          *(undefined4 *)(iVar1 + local_10 * 4) = *(undefined4 *)(*in_ECX + local_10 * 4);
        }
        FUN_005af7b6(*in_ECX);
      }
      *in_ECX = iVar1;
      *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 10;
    }
    uVar2 = (uint)*(ushort *)(in_ECX + 1);
    *(undefined4 *)(*in_ECX + uVar2 * 4) = *param_1;
    *(short *)(in_ECX + 1) = (short)in_ECX[1] + 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

