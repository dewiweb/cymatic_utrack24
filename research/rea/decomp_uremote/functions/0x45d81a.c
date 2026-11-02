// rea decompile_all
// name: FUN_0045d81a
// address: 0x45d81a
// body: available
// range: 0x45d81a-0x45da3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045d81a(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 *local_5c;
  undefined *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x45d826;
  iStack_74 = param_1;
  uStack_78 = 0x45d82f;
  cVar1 = FUN_0045f278();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 1000) == 0) {
      if (*(int *)(param_1 + 0x114) != 0) {
        iStack_74 = 0x45d873;
        iStack_74 = FUN_00467fc4();
        uStack_78 = 0x45d87c;
        iStack_74 = FUN_00465858();
        local_8 = 0;
        local_40 = (undefined1 *)&uStack_78;
        local_44 = &DAT_009114d8;
        puStack_7c = (undefined1 *)0x45d89a;
        puStack_7c = (undefined1 *)FUN_00467f9c();
        puStack_80 = (undefined1 *)0x45d8a3;
        puStack_80 = (undefined1 *)FUN_00465858();
        puStack_84 = (undefined1 *)&puStack_7c;
        local_3c = (undefined1 *)&puStack_7c;
        local_34 = (undefined1 *)&puStack_84;
        local_8._0_1_ = 1;
        local_38 = &DAT_009114d8;
        puStack_88 = (undefined1 *)0x45d8c5;
        puStack_88 = (undefined1 *)FUN_00467f74();
        puStack_8c = (undefined1 *)0x45d8ce;
        puStack_8c = (undefined1 *)FUN_00465858();
        puStack_90 = (undefined1 *)&puStack_88;
        local_30 = (undefined1 *)&puStack_88;
        local_28 = (undefined1 *)&puStack_90;
        local_8._0_1_ = 2;
        local_2c = &DAT_009114d8;
        puStack_94 = (undefined1 *)0x45d8f0;
        puStack_94 = (undefined1 *)FUN_00467f4c();
        puStack_98 = (undefined1 *)0x45d8f9;
        puStack_98 = (undefined1 *)FUN_00465858();
        puStack_9c = (undefined1 *)&puStack_94;
        local_24 = (undefined1 *)&puStack_94;
        local_8._0_1_ = 3;
        local_20 = &DAT_009114d8;
        puStack_a0 = (undefined1 *)0x45d918;
        iVar2 = FUN_00467f24();
        puStack_a0 = (undefined1 *)(iVar2 + 1);
        puStack_a4 = (undefined1 *)0x45d922;
        puStack_a4 = (undefined1 *)FUN_00465858();
        local_18 = (undefined1 *)&uStack_a8;
        local_8._0_1_ = 4;
        local_1c = &DAT_009114d8;
        puStack_ac = (undefined1 *)0x45d941;
        iVar2 = FUN_00467ef7();
        puStack_ac = (undefined1 *)(iVar2 + -2000);
        local_5c = (undefined1 *)&puStack_ac;
        FUN_00465858(puStack_ac);
        FUN_00465c6b(local_18);
        puStack_ac = (undefined1 *)&puStack_a0;
        FUN_00465c30();
        uStack_a8 = 0x45d96e;
        puStack_a4 = (undefined1 *)&puStack_9c;
        FUN_00465c6b();
        puStack_a0 = local_24;
        puStack_a4 = (undefined1 *)0x45d977;
        FUN_00465c30();
        puStack_98 = local_28;
        puStack_9c = (undefined1 *)0x45d982;
        FUN_00465c6b();
        puStack_94 = local_30;
        puStack_98 = (undefined1 *)0x45d98b;
        FUN_00465c30();
        puStack_8c = local_34;
        puStack_90 = (undefined1 *)0x45d996;
        FUN_00465c6b();
        puStack_88 = local_3c;
        puStack_8c = (undefined1 *)0x45d99f;
        FUN_00465c30();
        puStack_80 = local_40;
        puStack_84 = (undefined1 *)0x45d9aa;
        FUN_00465c6b();
        puStack_7c = local_14;
        puStack_80 = (undefined1 *)0x45d9b3;
        FUN_00465c30();
        iStack_74 = 0x45d9bb;
        FUN_004652d6();
        iStack_74 = 0x45d9c3;
        FUN_004652d6();
        iStack_74 = 0x45d9cb;
        FUN_004652d6();
        iStack_74 = 0x45d9d3;
        FUN_004652d6();
        local_8 = CONCAT31(local_8._1_3_,10);
        iStack_74 = 0x45d9df;
        FUN_004652d6();
        iStack_74 = 0x45d9ea;
        puVar3 = (undefined4 *)FUN_004d076d();
        iStack_74 = *puVar3;
        uStack_78 = 0;
        puStack_7c = (undefined1 *)0xb002;
        puStack_80 = (undefined1 *)0x45da05;
        iVar2 = (**(code **)(**(int **)(param_1 + 0x114) + 0x174))();
        puStack_80 = (undefined1 *)iVar2;
        if (iVar2 != 0) {
          puStack_80 = (undefined1 *)(*(int *)(*(int *)(iVar2 + 4) + 0xc) + 4 + iVar2);
        }
        puStack_84 = (undefined1 *)0x45da21;
        (**(code **)(**(int **)(param_1 + 300) + 0x6c))();
        puStack_84 = (undefined1 *)0x45da30;
        (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 8) + 4 + iVar2) + 4))();
        iStack_74 = 0x45da38;
        FUN_004652d6();
      }
    }
    else {
      puStack_7c = (undefined1 *)0x45d852;
      FUN_00467e6f();
      puStack_7c = *(undefined1 **)(param_1 + 1000);
      puStack_80 = (undefined1 *)0x45d859;
      FUN_00446bfd();
    }
  }
  return;
}

