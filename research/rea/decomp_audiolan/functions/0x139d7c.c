// rea decompile_all
// name: FUN_00139d7c
// address: 0x139d7c
// body: available
// range: 0x139d7c-0x139ee3 inclusive
// range: 0x139f00-0x139f1b inclusive
// range: 0x139f40-0x139f4f inclusive
// range: 0x13a104-0x13a16b inclusive
// range: 0x13a210-0x13a2fb inclusive
// range: 0x13a3f0-0x13a467 inclusive
// range: 0x13a47c-0x13a49b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

int * FUN_00139d7c(int param_1,byte *param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int iStack_34;
  byte *local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  if (param_3 - (int)param_2 < 2) {
    return (int *)0x0;
  }
  iVar5 = 1;
  bVar1 = *param_2;
  local_30 = param_2 + 2;
  iStack_34 = param_1;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (bVar1 == 0x50) {
    local_48 = param_5;
    piVar3 = (int *)FUN_0013e7a0(param_1);
  }
  else if (bVar1 < 0x51) {
    if (bVar1 == 0) {
      local_48 = param_5;
      piVar3 = (int *)FUN_0013997c(param_1);
    }
    else if (bVar1 == 0x10) {
      local_48 = param_5;
      piVar3 = (int *)FUN_0013e57c(param_1);
    }
    else {
      if (bVar1 != 0x47) goto LAB_00139df0;
      local_48 = param_5;
      piVar3 = (int *)FUN_0013f728(param_1);
    }
  }
  else if (bVar1 == 0x60) {
    local_48 = param_5;
    piVar3 = (int *)FUN_00140ec4(param_1);
  }
  else if (bVar1 == 0x61) {
    local_48 = param_5;
    piVar3 = (int *)FUN_0014115c(param_1);
  }
  else {
LAB_00139df0:
    iVar2 = FUN_0016d7a4(0xe0,DAT_0013a49c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      local_48 = 0;
      piVar3 = (int *)FUN_0013b694(iVar2,0,param_1,param_4);
    }
    *(byte *)((int)piVar3 + 0x6d) = bVar1;
    *(byte *)(piVar3 + 0x1b) = *(byte *)(piVar3 + 0x1b) & 0xfe | bVar1 >> 7;
    if (bVar1 == 0x88) {
      if (param_3 - (int)local_30 < 8) {
LAB_0013a3f0:
        iVar5 = 0;
      }
      else {
        local_3e = *(undefined2 *)local_30;
        local_40 = *(undefined2 *)(local_30 + 2);
        pbVar4 = local_30 + 6;
        local_3c = *(undefined2 *)(local_30 + 4);
        local_30 = local_30 + 8;
        local_3a = *(undefined2 *)pbVar4;
        FUN_0016d9f8(&local_48,&local_40);
        *(undefined2 *)((int)piVar3 + 0x7a) = local_48._2_2_;
        *(undefined2 *)(piVar3 + 0x1e) = (undefined2)local_48;
        *(undefined2 *)(piVar3 + 0x1f) = local_44;
        *(undefined2 *)((int)piVar3 + 0x7e) = local_42;
      }
    }
    else if (bVar1 < 0x89) {
      if (bVar1 == 0x4a) {
        if (param_3 - (int)local_30 < 10) goto LAB_0013a3f0;
        local_3e = *(undefined2 *)local_30;
        local_40 = *(undefined2 *)(local_30 + 2);
        pbVar4 = local_30 + 6;
        local_3c = *(undefined2 *)(local_30 + 4);
        local_30 = local_30 + 8;
        local_3a = *(undefined2 *)pbVar4;
        FUN_0016d9f8(&local_48,&local_40);
        *(undefined2 *)((int)piVar3 + 0x7a) = local_48._2_2_;
        *(undefined2 *)(piVar3 + 0x1e) = (undefined2)local_48;
        *(undefined2 *)(piVar3 + 0x1f) = local_44;
        *(undefined2 *)((int)piVar3 + 0x7e) = local_42;
        iVar5 = FUN_0010e834(piVar3 + 0x2d,&local_30,param_3);
      }
      else if (bVar1 < 0x4b) {
        if (bVar1 == 0x44) {
          if (param_3 - (int)local_30 < 6) goto LAB_0013a3f0;
          pbVar4 = local_30 + 2;
          *(undefined2 *)(piVar3 + 0x1d) = *(undefined2 *)local_30;
          local_30 = local_30 + 6;
          piVar3[0x1c] = *(int *)pbVar4;
        }
        else if (bVar1 < 0x45) {
          if (bVar1 == 2) {
            if (param_3 - (int)local_30 < 3) goto LAB_0013a3f0;
            *(undefined2 *)(piVar3 + 0x1c) = *(undefined2 *)local_30;
            *(byte *)((int)piVar3 + 0x72) = local_30[2];
            local_30 = local_30 + 3;
          }
        }
        else if (bVar1 == 0x45) {
          if (param_3 - (int)local_30 < 1) goto LAB_0013a3f0;
          *(byte *)(piVar3 + 0x1c) = *local_30;
          local_30 = local_30 + 1;
        }
      }
      else {
        switch(bVar1) {
        case 0x81:
        case 0x82:
        case 0x86:
          goto switchD_00139edc_caseD_81;
        case 0x83:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x84:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x87:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else if (bVar1 == 0xc9) {
      if (param_3 - (int)local_30 < 4) {
        if (piVar3 == (int *)0x0) {
          return (int *)0x0;
        }
        goto LAB_0013a47c;
      }
      pbVar4 = local_30 + 2;
      *(undefined2 *)(piVar3 + 0x1c) = *(undefined2 *)local_30;
      local_30 = local_30 + 4;
      *(undefined2 *)((int)piVar3 + 0x72) = *(undefined2 *)pbVar4;
    }
    else if (bVar1 < 0xca) {
      switch(bVar1) {
      case 0xc0:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
switchD_00139edc_caseD_81:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 200:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      switch(bVar1) {
      case 0xf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf1:
        goto switchD_00139edc_caseD_81;
      case 0xf2:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf3:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xf4:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  if (iVar5 != 0) {
    if (param_5 != 0) {
      *(short *)((int)piVar3 + 0x6a) = (short)local_30 - (short)param_2;
    }
    iVar5 = FUN_000e9bb4(piVar3,0x3c,param_1 + 0x548);
    if (iVar5 != 0) {
      return piVar3;
    }
  }
LAB_0013a47c:
  (**(code **)(*piVar3 + 0x3c))(piVar3);
  return (int *)0x0;
}

