// rea decompile_all
// name: FUN_00518f40
// address: 0x518f40
// body: available
// range: 0x518f40-0x518fce inclusive
// range: 0x518fd1-0x519055 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00518f40(short param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  int in_ECX;
  int local_14;
  ushort local_c;
  short local_8 [2];
  
  *param_3 = 0;
  local_c = 0;
  while( true ) {
    if (*(ushort *)(in_ECX + 0x48) <= local_c) {
      return (uint)(byte)(*(ushort *)(in_ECX + 0x48) >> 8) << 8;
    }
    if ((*(int *)(in_ECX + 0x4c) != 0) &&
       (*(short *)(*(int *)(in_ECX + 0x4c) + 4 + (uint)local_c * 8) == param_1)) break;
    if (*(int *)(in_ECX + 0x50) != 0) {
      if (in_ECX == 0) {
        local_14 = 0;
      }
      else {
        local_14 = in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      }
      (**(code **)**(undefined4 **)(in_ECX + 0x50))(local_14,local_c,param_2,local_8);
      if (local_8[0] == param_1) {
        iVar1 = (int)((uint)local_c * 0xffff) / (int)(uint)*(ushort *)(in_ECX + 0x48);
        *param_3 = (short)iVar1;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    local_c = local_c + 1;
  }
  FUN_00501f30(*(undefined4 *)(*(int *)(in_ECX + 0x4c) + (uint)local_c * 8));
  iVar1 = (int)((uint)local_c * 0xffff) / (int)(uint)*(ushort *)(in_ECX + 0x48);
  *param_3 = (short)iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

