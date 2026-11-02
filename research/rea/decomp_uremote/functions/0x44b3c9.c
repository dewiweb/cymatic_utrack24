// rea decompile_all
// name: FUN_0044b3c9
// address: 0x44b3c9
// body: available
// range: 0x44b3c9-0x44b9b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044b3c9(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  undefined4 ***pppuVar6;
  float10 fVar7;
  undefined1 ***pppuVar8;
  undefined4 **ppuStack_c0;
  undefined4 **ppuStack_bc;
  undefined1 ***pppuStack_b8;
  undefined4 ***pppuStack_b4;
  undefined1 **ppuStack_b0;
  undefined1 ***apppuStack_ac [15];
  undefined1 **local_70 [6];
  undefined4 *local_58 [6];
  undefined1 ***local_40;
  int local_3c;
  int local_38;
  undefined1 *local_34;
  float local_30;
  int local_2c;
  int local_28;
  undefined4 **local_24;
  undefined1 **local_20;
  undefined1 ***local_1c;
  undefined4 *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x44b3d8;
  local_3c = *(int *)(*(int *)(param_1 + 0x78) + 0x7c) + 0x1e0;
  apppuStack_ac[0] = (undefined1 ***)0x44b3f1;
  iVar1 = FUN_0044bfc5();
  local_30 = (float)*(int *)(iVar1 + 0xc);
  apppuStack_ac[0] = (undefined1 ***)0x44b401;
  local_2c = FUN_005b3fb0();
  local_38 = *(int *)(param_1 + 0x18) + local_2c * -2;
  apppuStack_ac[0] = (undefined1 ***)0x44b413;
  iVar1 = FUN_0044bfc5();
  apppuStack_ac[0] = (undefined1 ***)(iVar1 + 0xa0);
  local_1c = (undefined1 ***)apppuStack_ac;
  ppuStack_b0 = (undefined1 **)0x44b426;
  FUN_004d076d();
  ppuStack_b0 = (undefined1 **)0x44b42d;
  FUN_0047cda7();
  apppuStack_ac[0] = (undefined1 ***)(param_1 + 0x94);
  ppuStack_b0 = (undefined1 **)0x44b43c;
  local_40 = apppuStack_ac[0];
  FUN_0047ceaa();
  ppuStack_b0 = (undefined1 **)local_18;
  pppuStack_b4 = (undefined4 ***)0x44b44a;
  FUN_0046537e();
  local_8 = 0;
  ppuStack_b0 = (undefined1 **)local_18;
  pppuStack_b4 = (undefined4 ***)0x44b45a;
  local_20 = (undefined1 **)FUN_0049fa60();
  ppuStack_b0 = (undefined1 **)0x44b468;
  local_20 = (undefined1 **)FUN_005b3fb0();
  local_8 = 0xffffffff;
  ppuStack_b0 = (undefined1 **)0x44b477;
  FUN_004652d6();
  ppuStack_b0 = (undefined1 **)local_18;
  pppuStack_b4 = (undefined4 ***)0x44b485;
  FUN_0046537e();
  ppuStack_b0 = (undefined1 **)0x1;
  local_1c = (undefined1 ***)&pppuStack_b4;
  local_8 = 1;
  pppuStack_b4 = (undefined4 ***)0x21;
  pppuStack_b8 = *(undefined1 ****)(param_1 + 0x84);
  ppuStack_bc = (undefined4 **)local_20;
  ppuStack_c0 = (undefined4 **)0x0;
  FUN_0047d02d(in_ECX,local_18,local_2c);
  local_8 = 0xffffffff;
  ppuStack_b0 = (undefined1 **)0x44b4bc;
  FUN_004652d6();
  local_1c = &ppuStack_b0;
  pppuStack_b4 = (undefined4 ***)0x44b4cc;
  FUN_004d076d();
  pppuStack_b4 = (undefined4 ***)0x44b4d3;
  FUN_0047cda7();
  ppuStack_b0 = (undefined1 **)0x3f800000;
  pppuStack_b4 = (undefined4 ***)0x1;
  local_1c = (undefined1 ***)&pppuStack_b8;
  pppuStack_b8 = (undefined1 ***)0x21;
  ppuStack_bc = *(undefined4 ***)(param_1 + 0x84);
  ppuStack_c0 = (undefined4 **)((local_38 - (int)local_20) - local_2c);
  FUN_0047d12a((int)local_20 + local_2c,0);
  local_28 = *(int *)(param_1 + 0x84);
  ppuStack_b0 = (undefined1 **)(param_1 + 0x88);
  pppuStack_b4 = (undefined4 ***)0x44b522;
  FUN_0047ceaa();
  pppuStack_b4 = (undefined4 ***)0x3f800000;
  pppuStack_b8 = (undefined1 ***)0x2;
  local_1c = (undefined1 ***)&ppuStack_bc;
  ppuStack_bc = (undefined4 **)0x24;
  ppuStack_c0 = *(undefined4 ***)(param_1 + 0x80);
  pppuVar6 = (undefined4 ***)(local_3c + 4);
  FUN_0047d12a(*(int *)(param_1 + 0x84) + local_2c,local_28,local_38 + *(int *)(param_1 + 0x84) * -2
              );
  local_24 = *(undefined4 ***)(param_1 + 0x84);
  local_18[0] = (undefined4 *)((local_38 - (int)local_24) + local_2c);
  ppuStack_c0 = (undefined4 **)(float)(int)local_24;
  local_1c = (undefined1 ***)((*(int *)(param_1 + 0x80) - (int)local_24) / 2 + local_28);
  pppuStack_b4 = (undefined4 ***)(float)(int)local_1c;
  ppuStack_bc = local_70;
  pppuStack_b8 = (undefined1 ***)(float)(int)local_18[0];
  local_20 = (undefined1 **)ppuStack_c0;
  FUN_0047745f();
  ppuStack_c0 = (undefined1 ***)0x44b5bc;
  FUN_0047713c();
  iVar1 = *(int *)(local_3c + 0x74);
  if (iVar1 == 0) {
    pppuStack_b4 = (undefined4 ***)local_70;
    ppuStack_bc = (undefined4 **)0x44b6b0;
    iVar1 = FUN_0044bfc5();
    pppuStack_b8 = (undefined1 ***)(iVar1 + 0x15c);
LAB_0044b6b5:
    ppuStack_bc = (undefined1 ***)0x44b6be;
    FUN_0047d2ae();
  }
  else if (iVar1 == 1) {
    pppuStack_b4 = (undefined4 ***)0x44b5f1;
    fVar7 = (float10)FUN_0049fa3d();
    ppuStack_bc = local_58;
    pppuStack_b4 = (undefined4 ***)(float)(-fVar7 * (float10)0.5);
    pppuStack_b8 = (undefined1 ***)0x0;
    ppuStack_c0 = (undefined4 **)0x44b616;
    local_1c = (undefined1 ***)pppuStack_b4;
    FUN_0047713c();
    pppuStack_b4 = (undefined4 ***)0x44b620;
    pppuStack_b4 = (undefined4 ***)FUN_00476f96();
    pppuStack_b8 = (undefined1 ***)0x40000000;
    ppuStack_bc = (undefined4 **)0x44b633;
    pppuStack_b8 = (undefined1 ***)FUN_0047badf();
    ppuStack_bc = (undefined4 **)0x44b639;
    iVar1 = FUN_0044bfc5();
    ppuStack_bc = (undefined4 **)(iVar1 + 0x11c);
    ppuStack_c0 = (undefined4 **)0x44b646;
    FUN_0047d2d0();
    pppuStack_b4 = (undefined4 ***)local_40;
    pppuStack_b8 = (undefined1 ***)0x44b64e;
    FUN_0047ceaa();
    pppuStack_b4 = *(undefined4 ****)(local_3c + 0x78);
    pppuStack_b8 = (undefined1 ***)0x44b65c;
    local_1c = (undefined1 ***)FUN_00465858();
    pppuStack_b4 = (undefined4 ***)0x1;
    local_34 = (undefined1 *)&pppuStack_b8;
    ppuStack_bc = local_24;
    local_8 = 2;
    ppuStack_c0 = local_24;
    pppuStack_b8 = (undefined1 ***)0xc;
    uVar3 = FUN_005b3fb0();
    uVar4 = FUN_005b3fb0(uVar3);
    FUN_0047d02d(in_ECX,local_1c,uVar4,uVar3);
    local_8 = 0xffffffff;
    pppuStack_b4 = (undefined4 ***)0x44b6a4;
    FUN_004652d6();
  }
  else if (iVar1 == 2) {
    pppuStack_b4 = (undefined4 ***)local_70;
    ppuStack_bc = (undefined4 **)0x44b5df;
    iVar1 = FUN_0044bfc5();
    pppuStack_b8 = (undefined1 ***)(iVar1 + 0x13c);
    goto LAB_0044b6b5;
  }
  local_28 = local_28 + *(int *)(param_1 + 0x80);
  pppuStack_b4 = &local_1c;
  pppuStack_b8 = (undefined1 ***)0x44b6d2;
  FUN_0047cef9();
  local_8 = 3;
  pppuStack_b8 = (undefined1 ***)0x44b6df;
  pppuStack_b4 = pppuVar6;
  FUN_0049fa7b();
  local_8 = 0xffffffff;
  pppuStack_b4 = (undefined4 ***)0x44b6ed;
  FUN_004c4d7a();
  pppuStack_b4 = (undefined4 ***)(param_1 + 0x8c);
  pppuStack_b8 = (undefined1 ***)0x44b6f9;
  FUN_0047ceaa();
  pppuStack_b8 = (undefined1 ***)0x44b6fe;
  iVar1 = FUN_0044bfc5();
  pppuStack_b8 = (undefined1 ***)(iVar1 + 0xa0);
  local_34 = (undefined1 *)&pppuStack_b8;
  ppuStack_bc = (undefined4 **)0x44b711;
  FUN_004d076d();
  ppuStack_bc = (undefined4 **)0x44b718;
  FUN_0047cda7();
  pppuStack_b8 = (undefined1 ***)local_18;
  ppuStack_bc = (undefined4 **)0x44b728;
  FUN_0046537e();
  pppuStack_b8 = (undefined1 ***)local_18;
  local_8 = 4;
  ppuStack_bc = (undefined4 **)0x44b73e;
  local_1c = (undefined1 ***)FUN_0049fa60();
  pppuStack_b8 = (undefined1 ***)0x44b74c;
  local_30 = (float)FUN_005b3fb0();
  local_8 = 0xffffffff;
  pppuStack_b8 = (undefined1 ***)0x44b75b;
  FUN_004652d6();
  pppuStack_b8 = (undefined1 ***)local_18;
  ppuStack_bc = (undefined4 **)0x44b766;
  FUN_0046537e();
  pppuStack_b8 = (undefined1 ***)0x1;
  local_34 = (undefined1 *)&ppuStack_bc;
  local_8 = 5;
  ppuStack_bc = (undefined4 **)0x9;
  ppuStack_c0 = *(undefined4 ***)(param_1 + 0x80);
  FUN_0047d02d(in_ECX,local_18,local_2c,local_28,local_30);
  local_8 = 0xffffffff;
  pppuStack_b8 = (undefined1 ***)0x44b79f;
  FUN_004652d6();
  ppuStack_bc = (undefined4 **)0x44b7af;
  local_34 = (undefined1 *)&pppuStack_b8;
  FUN_004d076d();
  ppuStack_bc = (undefined4 **)0x44b7b6;
  FUN_0047cda7();
  pppuStack_b8 = (undefined1 ***)0x3f800000;
  ppuStack_bc = (undefined4 **)0x2;
  local_34 = (undefined1 *)&ppuStack_c0;
  ppuStack_c0 = (undefined1 ***)0x9;
  FUN_0047d12a((int)local_30 + local_2c,local_28,
               ((local_38 - *(int *)(param_1 + 0x84)) - (int)local_30) - local_2c,
               *(undefined4 *)(param_1 + 0x80));
  if (*(uint *)(local_3c + 0x7c) < *(uint *)(local_3c + 0x9c)) {
    iVar1 = *(int *)(*(int *)(local_3c + 0x94) + *(uint *)(local_3c + 0x7c) * 4);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) goto LAB_0044b924;
  local_24 = *(undefined4 ***)(param_1 + 0x84);
  local_20 = (undefined1 **)(float)(int)local_24;
  local_18[0] = (undefined4 *)((local_38 - (int)local_24) + local_2c);
  pppuStack_b8 = (undefined1 ***)(float)local_28;
  ppuStack_c0 = local_58;
  ppuStack_bc = (undefined4 **)(float)(int)local_18[0];
  FUN_0047745f(local_20);
  FUN_0047713c();
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0) {
    pppuStack_b8 = (undefined1 ***)local_58;
    ppuStack_c0 = (undefined4 **)0x44b916;
    iVar1 = FUN_0044bfc5();
    ppuStack_bc = (undefined4 **)(iVar1 + 0x15c);
  }
  else {
    if (iVar2 == 1) {
      pppuStack_b8 = (undefined1 ***)local_58;
      ppuStack_bc = (undefined4 **)0x40000000;
      ppuStack_c0 = (undefined4 **)0x44b89f;
      ppuStack_bc = (undefined4 **)FUN_0047badf();
      ppuStack_c0 = (undefined4 **)0x44b8a5;
      iVar2 = FUN_0044bfc5();
      ppuStack_c0 = (undefined4 **)(iVar2 + 0x11c);
      FUN_0047d2d0();
      pppuStack_b8 = local_40;
      ppuStack_bc = (undefined4 **)0x44b8ba;
      FUN_0047ceaa();
      pppuStack_b8 = *(undefined1 ****)(iVar1 + 0x10);
      ppuStack_bc = (undefined4 **)0x44b8c5;
      uVar3 = FUN_00465858();
      pppuStack_b8 = (undefined1 ***)0x1;
      local_34 = (undefined1 *)&ppuStack_bc;
      ppuStack_c0 = local_24;
      local_8 = 6;
      ppuStack_bc = (undefined4 **)0xc;
      pppuVar8 = (undefined1 ***)local_24;
      uVar4 = FUN_005b3fb0(local_24);
      uVar5 = FUN_005b3fb0(uVar4);
      FUN_0047d02d(in_ECX,uVar3,uVar5,uVar4,pppuVar8);
      local_8 = 0xffffffff;
      pppuStack_b8 = (undefined1 ***)0x44b90a;
      FUN_004652d6();
      goto LAB_0044b924;
    }
    if (iVar2 != 2) goto LAB_0044b924;
    pppuStack_b8 = (undefined1 ***)local_58;
    ppuStack_c0 = (undefined4 **)0x44b87f;
    iVar1 = FUN_0044bfc5();
    ppuStack_bc = (undefined4 **)(iVar1 + 0x13c);
  }
  ppuStack_c0 = (undefined1 ***)0x44b924;
  FUN_0047d2ae();
LAB_0044b924:
  pppuStack_b8 = (undefined1 ***)0x44b929;
  iVar1 = FUN_0044bfc5();
  pppuStack_b8 = (undefined1 ***)(iVar1 + 0xb4);
  local_34 = (undefined1 *)&pppuStack_b8;
  ppuStack_bc = (undefined4 **)0x44b93c;
  FUN_004d076d();
  ppuStack_bc = (undefined4 **)0x44b943;
  FUN_0047cda7();
  pppuStack_b8 = (undefined1 ***)0x44b951;
  iVar1 = FUN_0044bfc5();
  pppuStack_b8 = (undefined1 ***)(float)*(int *)(iVar1 + 0x14);
  ppuStack_bc = (undefined4 **)0x44b962;
  ppuStack_bc = (undefined4 **)FUN_0043bc2d();
  ppuStack_c0 = (undefined4 **)0x44b968;
  FUN_0047d575();
  pppuStack_b8 = (undefined1 ***)0x44b96d;
  iVar1 = FUN_0044bfc5();
  pppuStack_b8 = (undefined1 ***)(iVar1 + 0xb8);
  ppuStack_bc = (undefined4 **)0x44b980;
  FUN_004d076d();
  ppuStack_bc = (undefined4 **)0x44b987;
  FUN_0047cda7();
  pppuStack_b8 = (undefined1 ***)0x3f800000;
  ppuStack_c0 = (undefined4 **)0x44b994;
  iVar1 = FUN_0044bfc5();
  ppuStack_bc = (undefined4 **)(float)*(int *)(iVar1 + 0x14);
  ppuStack_c0 = (undefined4 **)0x44b9a7;
  ppuStack_c0 = (undefined4 **)FUN_0043bc2d();
  FUN_0047d60d(in_ECX);
  return;
}

