// rea decompile_all
// name: FUN_005a3900
// address: 0x5a3900
// body: available
// range: 0x5a3900-0x5a3b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a3900(short param_1,short param_2,char param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  int in_ECX;
  int local_8;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    if (((((*(byte *)(in_ECX + 0x6a) & 1) == 0) || (param_3 != '\0')) ||
        (*(short *)(in_ECX + 0x68) != param_2)) || (*(short *)(in_ECX + 0x48) == 4)) {
      *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) | 1;
      *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) | 2;
      *(short *)(in_ECX + 0x68) = param_2;
    }
  }
  else if (param_1 == -1) {
    for (local_8 = 0;
        uVar2 = (*(code *)**(undefined4 **)
                            (*(int *)(in_ECX + 0x54) + 0x28 +
                            *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)))(),
        local_8 < (int)(uVar2 & 0xffff); local_8 = local_8 + 1) {
      *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) | 1;
      *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + local_8) | 2;
      *(short *)(*(int *)(in_ECX + 0x68) + local_8 * 2) = param_2;
    }
  }
  else {
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = param_1 - 1;
    }
    uVar1 = (*(code *)**(undefined4 **)
                        (*(int *)(in_ECX + 0x54) + 0x28 +
                        *(int *)(*(int *)(*(int *)(in_ECX + 0x54) + 0x28) + 0xc)))();
    if ((uVar3 < uVar1) &&
       ((((*(byte *)(*(int *)(in_ECX + 0x6c) + (uint)uVar3) & 1) == 0 || (param_3 != '\0')) ||
        (*(short *)(*(int *)(in_ECX + 0x68) + (uint)uVar3 * 2) != param_2)))) {
      *(byte *)((uint)uVar3 + *(int *)(in_ECX + 0x6c)) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + (uint)uVar3) | 1;
      *(byte *)((uint)uVar3 + *(int *)(in_ECX + 0x6c)) =
           *(byte *)(*(int *)(in_ECX + 0x6c) + (uint)uVar3) | 2;
      *(short *)(*(int *)(in_ECX + 0x68) + (uint)uVar3 * 2) = param_2;
    }
  }
  FUN_00579180();
  return;
}

