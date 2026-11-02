// rea decompile_all
// name: FUN_0049d521
// address: 0x49d521
// body: available
// range: 0x49d521-0x49d6b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0049d521(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int in_ECX;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int local_54 [2];
  int local_4c;
  int local_48;
  undefined1 local_38 [16];
  undefined4 local_28;
  int local_24;
  int local_20;
  byte local_1c;
  byte local_18;
  byte local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0;
  local_28 = 0;
  FUN_0047e303(param_1,((char)param_2 != '\0') + '\x01',in_ECX,param_3,param_2);
  local_28 = 1;
  FUN_0047e3d7();
  FUN_0046163a();
  local_8 = 1;
  FUN_00465075(&local_20);
  puVar9 = local_38;
  piVar8 = &local_20;
  local_8._0_1_ = 2;
  uVar4 = FUN_0047e74f(piVar8,puVar9);
  FUN_00460bc4(uVar4,piVar8,puVar9);
  thunk_FUN_004652d6();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_004615f7();
  cVar3 = FUN_0047e3d7();
  FUN_0047e7d7(local_54,1);
  local_24 = 0;
  if (0 < param_3) {
    local_20 = in_ECX + -1;
    do {
      pbVar6 = *(byte **)(param_4 + local_24 * 4);
      pbVar5 = (byte *)(local_4c * local_24 + local_54[0]);
      iVar2 = local_20;
      if (cVar3 == '\0') {
        for (; -1 < iVar2; iVar2 = iVar2 + -1) {
          local_1c = pbVar6[1];
          bVar1 = pbVar6[2];
          pbVar5[2] = *pbVar6;
          pbVar5[1] = local_1c;
          *pbVar5 = bVar1;
          pbVar5 = pbVar5 + local_48;
          pbVar6 = pbVar6 + 4;
        }
      }
      else {
        for (; -1 < iVar2; iVar2 = iVar2 + -1) {
          local_14 = pbVar6[1];
          local_1c = pbVar6[2];
          local_18 = *pbVar6;
          bVar1 = pbVar6[3];
          *pbVar5 = local_1c;
          uVar7 = (uint)bVar1;
          pbVar5[1] = local_14;
          pbVar5[2] = local_18;
          pbVar5[3] = bVar1;
          if (uVar7 < 0xff) {
            if (uVar7 == 0) {
              *pbVar5 = 0;
              pbVar5[1] = 0;
              pbVar5[2] = 0;
            }
            else {
              *pbVar5 = (byte)(local_1c * uVar7 + 0x7f >> 8);
              pbVar5[1] = (byte)(local_14 * uVar7 + 0x7f >> 8);
              pbVar5[2] = (byte)(local_18 * uVar7 + 0x7f >> 8);
            }
          }
          pbVar5 = pbVar5 + local_48;
          pbVar6 = pbVar6 + 4;
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < param_3);
  }
  FUN_0047e819();
  return param_1;
}

