// rea decompile_all
// name: FUN_005965f0
// address: 0x5965f0
// body: available
// range: 0x5965f0-0x596730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005965f0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  byte local_6;
  char local_5;
  
  if (*param_1 != 0) {
    FUN_005b13e8(*param_1);
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)*param_2;
  *param_2 = *param_2 + 2;
  *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) ^ 0x9f35;
  if ((int)(uint)*(ushort *)((int)param_1 + 6) <= param_3 - *param_2) {
    *(short *)(param_1 + 1) = *(short *)((int)param_1 + 6) + 1;
    iVar1 = FUN_005b04d6((short)param_1[1]);
    *param_1 = iVar1;
    if (*param_1 != 0) {
      local_6 = 0x30;
      local_5 = '\a';
      for (local_c = 0; local_c < *(ushort *)((int)param_1 + 6); local_c = local_c + 1) {
        *(byte *)(*param_1 + local_c) = local_6 ^ *(byte *)(*param_2 + local_c);
        local_5 = local_5 + '\a';
        local_6 = local_6 + local_5;
      }
      *(undefined1 *)((uint)*(ushort *)((int)param_1 + 6) + *param_1) = 0;
      iVar1 = (uint)*(ushort *)((int)param_1 + 6) + *param_2;
      *param_2 = iVar1;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  uVar2 = FUN_00501ba0();
  return uVar2 & 0xffffff00;
}

