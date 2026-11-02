// rea decompile_all
// name: FUN_0041648a
// address: 0x41648a
// body: available
// range: 0x41648a-0x41660b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041648a(undefined1 *param_1,byte *param_2,int param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  int local_c;
  byte local_5;
  
  local_c = 0;
  puVar1 = (undefined4 *)FUN_00411912(0x18,&local_c);
  if (local_c == 0) {
    if (param_1 + 4 <= param_2) {
      *(undefined1 *)(puVar1 + 1) = *param_1;
      *(ushort *)((int)puVar1 + 6) = CONCAT11(param_1[1],param_1[2]);
      *(undefined1 *)((int)puVar1 + 5) = param_1[3];
      pbVar2 = param_1 + 4;
      puVar1[3] = pbVar2 + (*(int *)(param_3 + 4) - *(int *)(param_3 + 0x94));
      local_5 = *(byte *)((int)puVar1 + 5) & 1;
      puVar1[2] = 3;
      if (local_5 != 0) {
        puVar1[2] = 5;
      }
      if ((*(byte *)((int)puVar1 + 5) & 2) != 0) {
        puVar1[2] = puVar1[2] + 1;
      }
      uVar3 = (uint)*(byte *)(puVar1 + 1);
      if (pbVar2 + uVar3 * puVar1[2] <= param_2) {
        if (*(char *)(puVar1 + 1) != '\0') {
          if (local_5 == 0) {
            puVar1[4] = (uint)*pbVar2 << 0x10 | (uint)(byte)param_1[5];
            puVar1[5] = (uint)pbVar2[(uVar3 - 1) * puVar1[2]] << 0x10 |
                        (uint)(pbVar2 + (uVar3 - 1) * puVar1[2])[1];
          }
          else {
            pbVar2 = pbVar2 + (uVar3 - 1) * puVar1[2] + 2;
            puVar1[4] = CONCAT22(CONCAT11(param_1[4],param_1[5]),CONCAT11(param_1[6],param_1[7]));
            puVar1[5] = CONCAT22(CONCAT11(pbVar2[-2],pbVar2[-1]),CONCAT11(*pbVar2,pbVar2[1]));
          }
          *puVar1 = 0;
          **(undefined4 **)(param_3 + 0x8c) = puVar1;
          *(undefined4 **)(param_3 + 0x8c) = puVar1;
          *(int *)(param_3 + 0x84) = *(int *)(param_3 + 0x84) + (uint)*(byte *)(puVar1 + 1);
          return 0;
        }
        FUN_00411a5c(puVar1);
        return local_c;
      }
    }
    FUN_00411a5c(puVar1);
    local_c = 8;
  }
  return local_c;
}

