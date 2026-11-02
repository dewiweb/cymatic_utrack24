// rea decompile_all
// name: FUN_00595f40
// address: 0x595f40
// body: available
// range: 0x595f40-0x59601d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00595f40(undefined1 param_1,ushort param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined4 local_14;
  undefined2 local_10;
  char local_9;
  int local_8;
  
  local_9 = '\0';
  uVar1 = *(undefined4 *)(in_ECX[0xb] + 0xd8);
  *(ushort *)(param_4 + 0x4c) = param_2 | 0x3704;
  *(undefined4 *)(param_4 + 0x48) = uVar1;
  FUN_00503de0(param_3);
  local_10 = (**(code **)(*in_ECX + 0x10))();
  local_8 = FUN_00532410(local_10,param_1,*(byte *)(in_ECX + 0x1d) >> 1 & 1,
                         *(byte *)(in_ECX + 0x1d) & 1);
  if (local_8 != 0) {
    local_14 = *(undefined4 *)(local_8 + 0x1c);
    local_9 = (**(code **)(*in_ECX + 0x14))(&local_14);
  }
  if (local_9 != '\0') {
    FUN_00529f40(param_4,0);
  }
  return local_9;
}

