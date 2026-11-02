// rea decompile_all
// name: FUN_0041c099
// address: 0x41c099
// body: available
// range: 0x41c099-0x41c1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c099(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int local_8;
  
  if (param_6 == 0) {
    puVar6 = in_EAX + 0x81;
  }
  else {
    puVar6 = in_EAX + 0x183;
    in_EAX = in_EAX + 0x102;
  }
  *in_EAX = 0;
  *puVar6 = 0;
  FUN_0041bf95(0,param_2,in_EAX,puVar6);
  FUN_0041bf95(1,param_4,in_EAX,puVar6);
  uVar4 = *in_EAX;
  uVar2 = *puVar6;
  if (0 < (int)uVar4) {
    puVar5 = in_EAX + 1;
    for (uVar1 = uVar4; uVar1 != 0; uVar1 = uVar1 - 1) {
      if ((1 < uVar1) && ((int)(puVar5[8] - *puVar5) < (int)puVar5[1])) {
        puVar5[1] = puVar5[8] - *puVar5;
      }
      puVar5[2] = puVar5[1] + *puVar5;
      puVar5[3] = *puVar5;
      puVar5 = puVar5 + 8;
    }
  }
  if (0 < (int)uVar2) {
    puVar5 = puVar6 + 1;
    for (uVar1 = uVar2; uVar1 != 0; uVar1 = uVar1 - 1) {
      if ((1 < uVar1) && ((int)puVar5[1] < (int)(*puVar5 - puVar5[8]))) {
        puVar5[1] = *puVar5 - puVar5[8];
      }
      puVar5[2] = *puVar5;
      puVar5[3] = puVar5[1] + *puVar5;
      puVar5 = puVar5 + 8;
    }
  }
  local_8 = 1;
  do {
    puVar5 = in_EAX + 1;
    if (uVar4 != 0) {
      in_EAX[4] = in_EAX[4] - param_5;
      iVar7 = uVar4 - 1;
      uVar4 = in_EAX[3];
      if (iVar7 != 0) {
        do {
          iVar3 = puVar5[0xb] - uVar4;
          if (iVar3 < param_5 * 2) {
            uVar4 = iVar3 / 2 + uVar4;
            puVar5[0xb] = uVar4;
            puVar5[2] = uVar4;
          }
          else {
            puVar5[2] = uVar4 + param_5;
            puVar5[0xb] = puVar5[0xb] - param_5;
          }
          uVar4 = puVar5[10];
          puVar5 = puVar5 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      puVar5[2] = uVar4 + param_5;
    }
    local_8 = local_8 + -1;
    uVar4 = uVar2;
    in_EAX = puVar6;
  } while (-1 < local_8);
  return;
}

