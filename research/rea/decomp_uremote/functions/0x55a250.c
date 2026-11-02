// rea decompile_all
// name: FUN_0055a250
// address: 0x55a250
// body: available
// range: 0x55a250-0x55a353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055a250(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_18;
  undefined1 local_14 [12];
  undefined2 local_8;
  
  FUN_00503c60(&DAT_0095c854);
  local_18 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(in_ECX + 10) <= local_18) goto LAB_0055a33e;
    if (*(char *)(*(int *)(in_ECX + 4) + 4 + local_18 * 8) == '\0') break;
    local_18 = local_18 + 1;
  }
  uVar2 = FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_18 * 8));
  FUN_00503650(uVar2);
  local_8 = *(undefined2 *)(*(int *)(in_ECX + 4) + 2 + local_18 * 8);
  FUN_0055aac0(*(undefined2 *)(*(int *)(in_ECX + 4) + local_18 * 8));
  for (; local_18 < (int)(*(ushort *)(in_ECX + 10) - 1); local_18 = local_18 + 1) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc + local_18 * 8);
    iVar1 = *(int *)(in_ECX + 4);
    *(undefined4 *)(iVar1 + local_18 * 8) = *(undefined4 *)(*(int *)(in_ECX + 4) + 8 + local_18 * 8)
    ;
    *(undefined4 *)(iVar1 + 4 + local_18 * 8) = uVar2;
  }
  *(short *)(in_ECX + 10) = *(short *)(in_ECX + 10) + -1;
LAB_0055a33e:
  FUN_00503c60(local_14);
  return param_1;
}

