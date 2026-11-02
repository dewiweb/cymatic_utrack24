// rea decompile_all
// name: FUN_00144f80
// address: 0x144f80
// body: available
// range: 0x144f80-0x14511b inclusive
// range: 0x145140-0x1451ab inclusive
// range: 0x1454cc-0x145643 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_00144f80(int *param_1,int *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  undefined1 auStack_d8 [4];
  int iStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  bVar1 = *(byte *)((int)param_2 + 0x6d);
  if (bVar1 == 0xc0) {
    uVar3 = 0;
    while( true ) {
      if (*(ushort *)(param_1 + 0x42) <= uVar3) {
        return;
      }
      piVar6 = *(int **)(param_1[0x41] + uVar3 * 4);
      if (piVar6 == (int *)0x0) break;
      (**(code **)(*param_2 + 0x6c))(auStack_c0,param_2);
      (**(code **)(*piVar6 + 0xc))(piVar6,*(int *)(*param_1 + -0x18) + (int)param_1,auStack_c0);
      uVar3 = uVar3 + 1 & 0xfffeffff;
    }
    return;
  }
  if (bVar1 < 0xc1) {
    if (bVar1 == 0x4a) {
      return;
    }
    if (bVar1 < 0x4b) {
      if (bVar1 == 0x45) {
        uVar2 = *(undefined2 *)((int)param_1 + 0xf2);
        piVar6 = (int *)FUN_00115c50(param_1);
        (**(code **)(*piVar6 + 0xd4))(auStack_50,piVar6);
        FUN_0010f674(auStack_40,auStack_50,uVar2);
        (**(code **)(*param_2 + 0x6c))(auStack_80,param_2);
        FUN_00132bac(param_1 + 0x10,auStack_80,(char)param_2[0x1c]);
        return;
      }
      if (bVar1 == 0x46) {
        FUN_001160dc(param_1);
        return;
      }
      if (bVar1 != 0x47) {
        return;
      }
      iStack_d4 = param_2[0x37];
      (**(code **)(*param_2 + 0x6c))(auStack_d0);
      uVar3 = FUN_0011606c(param_1,auStack_d0,&iStack_d4);
      if ((uVar3 & 1) != 0) {
        uVar7 = 0;
        while( true ) {
          if ((*(ushort *)(param_1 + 0x42) <= uVar7) ||
             (piVar6 = *(int **)(param_1[0x41] + uVar7 * 4), piVar6 == (int *)0x0)) break;
          (**(code **)(*param_2 + 0x6c))(auStack_70,param_2);
          (**(code **)(*piVar6 + 8))(piVar6,*(int *)(*param_1 + -0x18) + (int)param_1,auStack_70,3);
          uVar7 = uVar7 + 1 & 0xfffeffff;
        }
      }
      uVar4 = DAT_00145644;
      if ((uVar3 & 2) != 0) {
        uVar3 = 0;
        while( true ) {
          if (*(ushort *)(param_1 + 0x42) <= uVar3) {
            return;
          }
          piVar6 = *(int **)(param_1[0x41] + uVar3 * 4);
          if (piVar6 == (int *)0x0) break;
          (**(code **)(*param_2 + 0x6c))(auStack_60,param_2);
          (**(code **)(*piVar6 + 8))
                    (piVar6,*(int *)(*param_1 + -0x18) + (int)param_1,auStack_60,uVar4);
          uVar3 = uVar3 + 1 & 0xfffeffff;
        }
        return;
      }
      return;
    }
    if (bVar1 == 0x83) {
      uVar2 = *(undefined2 *)((int)param_1 + 0xf2);
      piVar6 = (int *)FUN_00115c50(param_1);
      (**(code **)(*piVar6 + 0xd4))(&iStack_d4,piVar6);
      FUN_0010f674(auStack_30,&iStack_d4,uVar2);
      uVar3 = 0;
      while( true ) {
        if (*(ushort *)(param_1 + 0x44) <= uVar3) {
          return;
        }
        puVar5 = *(undefined4 **)(param_1[0x43] + uVar3 * 4);
        if (puVar5 == (undefined4 *)0x0) break;
        (**(code **)*puVar5)(puVar5,*(int *)(*param_1 + -0x18) + (int)param_1,(char)param_2[0x1c]);
        uVar3 = uVar3 + 1 & 0xfffeffff;
      }
      return;
    }
    if (bVar1 != 0x84) {
      return;
    }
    uVar2 = *(undefined2 *)((int)param_1 + 0xf2);
    piVar6 = (int *)FUN_00115c50(param_1);
    (**(code **)(*piVar6 + 0xd4))(auStack_d8,piVar6);
    FUN_0010f674(auStack_30,auStack_d8,uVar2);
    if (*(char *)((int)param_2 + 0x75) != '\0') {
      FUN_00144ad0(param_1,(char)param_2[0x1d],0,param_2[0x1c]);
    }
    piVar6 = (int *)param_1[0x46];
    if (piVar6 == (int *)0x0) {
      return;
    }
    uVar4 = (**(code **)(*(int *)((int)piVar6 + *(int *)(*piVar6 + -0x38)) + 0x24))
                      ((int)piVar6 + *(int *)(*piVar6 + -0x38));
    FUN_00142970(uVar4,param_2);
  }
  else {
    switch(bVar1) {
    case 0xc1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 200:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xc9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

