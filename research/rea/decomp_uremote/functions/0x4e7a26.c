// rea decompile_all
// name: FUN_004e7a26
// address: 0x4e7a26
// body: available
// range: 0x4e7a26-0x4e7c30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004e7a26(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0;
  local_20 = 0;
  local_74 = *(undefined4 **)(*(int *)(in_ECX + 0x7c) + 0x14);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x4e7a58;
  local_1c = in_ECX;
  iVar2 = FUN_004e7675();
  local_74 = (undefined4 *)0x4e7a62;
  local_24 = iVar2;
  local_18 = FUN_004e79d1();
  local_18 = local_18 + 1;
  if (-1 < local_18) {
    local_14 = local_18 + iVar2;
    do {
      local_74 = (undefined4 *)local_14;
      local_78 = (undefined4 *)0x4e7a7c;
      iVar2 = FUN_004e6b24();
      if (iVar2 != 0) {
        local_74 = (undefined4 *)local_14;
        local_78 = (undefined4 *)0x4e7a8d;
        cVar1 = FUN_004a8c8e();
        if (cVar1 != '\0') {
          local_28 = (undefined1 *)&local_78;
          local_78 = (undefined4 *)0x0;
          local_74 = (undefined4 *)0x0;
          local_7c = iVar2;
          FUN_004c08d2();
          local_34 = *(undefined4 *)(iVar2 + 0x1c);
          local_38 = *(undefined4 *)(iVar2 + 0x18);
          local_40 = local_30;
          local_3c = local_2c;
          local_74 = (undefined4 *)0x4e7acd;
          puVar3 = (undefined4 *)FUN_004f5d2e();
          local_50 = *puVar3;
          local_4c = puVar3[1];
          local_48 = puVar3[2];
          local_44 = (undefined4 *)puVar3[3];
          in_ECX = local_1c;
        }
      }
      local_18 = local_18 + -1;
      local_14 = local_14 + -1;
    } while (-1 < local_18);
  }
  local_74 = (undefined4 *)local_60;
  local_78 = (undefined4 *)0x4e7b03;
  FUN_004c2047();
  local_74 = &local_40;
  local_78 = (undefined4 *)0x4e7b0f;
  piVar4 = (int *)FUN_004a4c72();
  local_50 = *piVar4;
  local_4c = piVar4[1];
  local_7c = piVar4[2];
  local_78 = (undefined4 *)piVar4[3];
  local_74 = (undefined4 *)0x1;
  *param_3 = local_50;
  local_80 = 2;
  *param_4 = local_4c;
  local_44 = local_78;
  FUN_0047e303(param_1);
  local_8 = 0;
  local_20 = 1;
  local_74 = (undefined4 *)0x4e7b4e;
  iVar2 = FUN_004e79d1();
  iVar2 = iVar2 + 1;
  if (-1 < iVar2) {
    param_3 = (int *)(local_24 + iVar2);
    do {
      local_74 = param_3;
      local_78 = (undefined4 *)0x4e7b6a;
      iVar5 = FUN_004e6b24();
      if (iVar5 != 0) {
        local_74 = param_3;
        local_78 = (undefined4 *)0x4e7b80;
        cVar1 = FUN_004a8c8e();
        if (cVar1 != '\0') {
          local_74 = (undefined4 *)0x4e7b93;
          FUN_0047cc87();
          local_28 = (undefined1 *)&local_80;
          local_8 = 1;
          local_80 = 0;
          local_7c = 0;
          piVar4 = (int *)FUN_004c08d2(in_ECX,iVar5);
          local_74 = (undefined4 *)(piVar4[1] - local_4c);
          local_78 = (undefined4 *)(*piVar4 - local_50);
          local_7c = 0x4e7bd3;
          FUN_0047cd42();
          local_74 = (undefined4 *)local_60;
          local_78 = (undefined4 *)0x4e7bdf;
          local_74 = (undefined4 *)FUN_004c2047();
          local_78 = (undefined4 *)0x4e7be5;
          cVar1 = FUN_0047ccb1();
          if (cVar1 != '\0') {
            local_74 = (undefined4 *)0x3f19999a;
            local_78 = (undefined4 *)0x4e7bf8;
            FUN_0047cd87();
            local_74 = (undefined4 *)0x0;
            local_7c = 0x4e7c05;
            local_78 = &local_3c;
            FUN_004c19f3();
            local_74 = (undefined4 *)0x4e7c0c;
            FUN_0047cda0();
          }
          local_8 = local_8 & 0xffffff00;
          local_74 = (undefined4 *)0x4e7c18;
          FUN_0047cca3();
        }
      }
      iVar2 = iVar2 + -1;
      param_3 = (int *)((int)param_3 + -1);
    } while (-1 < iVar2);
  }
  return param_1;
}

