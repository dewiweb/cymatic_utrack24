// rea decompile_all
// name: FUN_0049b20a
// address: 0x49b20a
// body: available
// range: 0x49b20a-0x49b32f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049b20a(undefined4 param_1,int param_2)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int extraout_EDX;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar1 = FUN_0049b003(param_1,in_EAX[1]);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x3c) = 0;
    local_c = (undefined4 *)(in_ECX + 0x70);
    local_8 = in_EAX[1];
    *(undefined4 *)(in_ECX + 0x38) = *in_EAX;
    *(undefined4 **)(in_ECX + 0x44) = in_EAX + 3;
    *(undefined4 *)(in_ECX + 0x48) = 0x400;
    local_10 = 0x400;
    do {
      iVar1 = -1;
      if (local_8 != -1) {
        iVar1 = local_8;
      }
      local_8 = local_8 - iVar1;
      *(int *)(in_ECX + 0x3c) = iVar1;
      if (*(int *)(in_ECX + 0x48) == 0) {
        if (0x7fffffff < (uint)(param_2 + local_10)) break;
        puVar2 = (undefined4 *)*local_c;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)FUN_0049167e();
          if (puVar2 == (undefined4 *)0x0) break;
          *puVar2 = 0;
          *local_c = puVar2;
        }
        *(undefined4 **)(in_ECX + 0x44) = puVar2 + 1;
        local_10 = local_10 + *(int *)(in_ECX + 0x74);
        *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x74);
        local_c = puVar2;
      }
      iVar1 = FUN_004687ce((-(uint)(local_8 != 0) & 0xfffffffc) + 4);
      local_8 = local_8 + *(int *)(in_ECX + 0x3c);
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    } while (iVar1 == 0);
    local_10 = local_10 - *(int *)(in_ECX + 0x48);
    *(undefined4 *)(in_ECX + 0x48) = 0;
    in_EAX[2] = local_10;
    if ((uint)(local_10 + param_2) < 0x7fffffff) {
      FUN_0048f554();
      iVar1 = extraout_EDX;
    }
    else {
      *(char **)(in_ECX + 0x50) = "compressed data too long";
      iVar1 = -4;
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
    if ((iVar1 == 1) && (local_8 == 0)) {
      FUN_0049af9a(in_EAX[1]);
      iVar1 = 0;
    }
  }
  return iVar1;
}

