// rea decompile_all
// name: FUN_00448421
// address: 0x448421
// body: available
// range: 0x448421-0x4485d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448421(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_8;
  
  puVar8 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00448643(puVar8,param_3 + -1,param_4);
  puVar5 = puVar8 + 1;
  while (puVar4 = puVar8, param_2 < puVar4) {
    cVar3 = FUN_004486d1(puVar4[-1]);
    if ((cVar3 != '\0') || (cVar3 = FUN_004486d1(*puVar4), puVar8 = puVar4 + -1, cVar3 != '\0'))
    break;
  }
  while ((puVar8 = puVar5, puVar2 = puVar5, local_8 = puVar4, puVar6 = puVar4, puVar5 < param_3 &&
         ((cVar3 = FUN_004486d1(*puVar5), cVar3 == '\0' &&
          (cVar3 = FUN_004486d1(*puVar4), cVar3 == '\0'))))) {
    puVar5 = puVar5 + 1;
  }
  do {
    while (puVar7 = puVar6, puVar6 = puVar4, param_3 <= puVar8) {
joined_r0x004484f0:
      while (puVar9 = puVar8, param_2 < puVar4) {
        puVar6 = puVar6 + -1;
        cVar3 = FUN_004486d1(*puVar6);
        if (cVar3 == '\0') {
          cVar3 = FUN_004486d1(*puVar7);
          puVar4 = local_8;
          puVar9 = puVar2;
          if (cVar3 != '\0') break;
          puVar7 = puVar7 + -1;
          if (puVar7 != puVar6) {
            uVar1 = *puVar7;
            *puVar7 = *puVar6;
            *puVar6 = uVar1;
          }
        }
        local_8 = local_8 + -1;
        puVar8 = puVar2;
        puVar4 = local_8;
      }
      if (puVar4 == param_2) {
        if (puVar9 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar5;
          return;
        }
        if ((puVar5 != puVar9) && (puVar7 != puVar5)) {
          uVar1 = *puVar7;
          *puVar7 = *puVar5;
          *puVar5 = uVar1;
        }
        puVar8 = puVar9 + 1;
        puVar5 = puVar5 + 1;
        puVar2 = puVar8;
        puVar6 = puVar7 + 1;
        if (puVar7 != puVar9) {
          uVar1 = *puVar7;
          *puVar7 = *puVar9;
          *puVar9 = uVar1;
        }
      }
      else {
        puVar4 = puVar4 + -1;
        local_8 = puVar4;
        if (puVar9 == param_3) {
          puVar6 = puVar7 + -1;
          if (puVar4 != puVar6) {
            uVar1 = *puVar4;
            *puVar4 = *puVar6;
            *puVar6 = uVar1;
          }
          puVar5 = puVar5 + -1;
          puVar8 = puVar9;
          if (puVar6 != puVar5) {
            uVar1 = *puVar6;
            *puVar6 = *puVar5;
            *puVar5 = uVar1;
          }
        }
        else {
          if (puVar9 != puVar4) {
            uVar1 = *puVar9;
            *puVar9 = *puVar4;
            *puVar4 = uVar1;
          }
          puVar8 = puVar9 + 1;
          puVar2 = puVar9 + 1;
          puVar6 = puVar7;
        }
      }
    }
    cVar3 = FUN_004486d1(*puVar7);
    puVar6 = puVar5;
    puVar4 = local_8;
    if (cVar3 == '\0') {
      cVar3 = FUN_004486d1(*puVar8);
      puVar6 = local_8;
      if (cVar3 != '\0') goto joined_r0x004484f0;
      puVar6 = puVar5 + 1;
      if (puVar5 != puVar8) {
        uVar1 = *puVar5;
        *puVar5 = *puVar8;
        *puVar8 = uVar1;
      }
    }
    puVar8 = puVar8 + 1;
    puVar5 = puVar6;
    puVar2 = puVar8;
    puVar6 = puVar7;
  } while( true );
}

