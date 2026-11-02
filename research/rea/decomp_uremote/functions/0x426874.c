// rea decompile_all
// name: FUN_00426874
// address: 0x426874
// body: available
// range: 0x426874-0x4269d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00426874(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint local_c;
  int local_8;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x68646d78,param_2,&local_c);
  if ((iVar1 == 0) && (7 < local_c)) {
    local_8 = FUN_0041117c((undefined4 *)(param_1 + 0x2e4));
    if (local_8 == 0) {
      puVar7 = *(undefined1 **)(param_1 + 0x2e4);
      puVar2 = puVar7 + local_c;
      uVar3 = (uint)CONCAT11(puVar7[2],puVar7[3]);
      uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar7[4],puVar7[5]),puVar7[6]),puVar7[7]);
      if (0xfffeffff < uVar6) {
        uVar6 = uVar6 & 0xffff;
      }
      if (((CONCAT11(*puVar7,puVar7[1]) == 0) && (uVar3 < 0x100)) && (uVar6 < 0x10002)) {
        uVar4 = FUN_00411976(1,0,&local_8);
        *(undefined4 *)(param_1 + 0x2f4) = uVar4;
        if (local_8 == 0) {
          uVar5 = 0;
          puVar7 = puVar7 + 8;
          if (uVar3 != 0) {
            do {
              if (puVar2 < puVar7 + uVar6) break;
              *(undefined1 *)(uVar5 + *(int *)(param_1 + 0x2f4)) = *puVar7;
              uVar5 = uVar5 + 1;
              puVar7 = puVar7 + uVar6;
            } while (uVar5 < uVar3);
          }
          *(uint *)(param_1 + 0x2ec) = uVar5;
          *(uint *)(param_1 + 0x2e8) = local_c;
          *(uint *)(param_1 + 0x2f0) = uVar6;
          return 0;
        }
      }
      else {
        local_8 = 3;
      }
      FUN_00411199();
      *(undefined4 *)(param_1 + 0x2e8) = 0;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

