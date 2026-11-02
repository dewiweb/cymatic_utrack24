// rea decompile_all
// name: FUN_000cd100
// address: 0xcd100
// body: available
// range: 0xcd100-0xcd42f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000cd1a0) */

void FUN_000cd100(int param_1,undefined4 param_2,int param_3,int *param_4,uint param_5,
                 undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_b8 [132];
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int *piStack_28;
  
  iVar1 = DAT_000cd434;
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  if (param_3 != 1) {
    FUN_000028a4(DAT_000cd430,param_3);
                    /* WARNING: Could not recover jumptable at 0x000cd140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_30,6);
    return;
  }
  if (param_5 == 0) {
    FUN_000028a4(DAT_000cd440,1);
                    /* WARNING: Could not recover jumptable at 0x000cd2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),local_30,6);
    return;
  }
  iVar8 = *(int *)(*param_4 + -4);
  if (iVar8 == 0) {
    piVar7 = (int *)(param_1 + 0x1b4);
    iVar8 = FUN_00003544(&DAT_000cd43c);
    if (iVar8 == 0) {
      if (*(int *)(*piVar7 + -0xc) == 0) {
        *(undefined4 *)(*piVar7 + -4) = 0;
        *(undefined2 *)*piVar7 = 0;
      }
      else {
        FUN_001d9b00(piVar7);
        *piVar7 = iVar1;
      }
      goto LAB_000cd230;
    }
    uVar6 = *(undefined4 *)(*piVar7 + -4);
    uVar4 = 0;
  }
  else {
    FUN_001d9d2c(param_1 + 0x1b4,param_4);
    piVar7 = (int *)(param_1 + 0x1b4);
    if (1 < *(int *)(*(int *)(param_1 + 0x1b4) + -0xc) + 1U) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1b4) + -4);
      iVar2 = FUN_001d9a60(piVar7,uVar4,uVar4);
      FUN_00003628(iVar2 + 0xc,*piVar7,*(int *)(*piVar7 + -4) << 1);
      FUN_001d9b00(piVar7);
      *piVar7 = iVar2 + 0xc;
    }
    if ((undefined4 *)(*piVar7 + -0xc) != DAT_000cd438) {
      *(undefined4 *)(*piVar7 + -0xc) = 0xffffffff;
    }
    if (*(short *)(*piVar7 + (iVar8 + -1) * 2) == 0x2f) goto LAB_000cd230;
    uVar4 = *(undefined4 *)(*piVar7 + -4);
    iVar8 = FUN_00003544(&DAT_000cd43c);
    uVar6 = 0;
  }
  FUN_001d982c(param_1 + 0x1b4,uVar4,uVar6,&DAT_000cd43c,iVar8,0,iVar8);
LAB_000cd230:
  iVar8 = 0;
  *(undefined1 *)(param_1 + 0x1b0) = param_7;
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1ac) = param_6;
  do {
    *(undefined4 *)(param_1 + iVar8 * 0xc + 0x1bc) = 0;
    uVar3 = uVar3 + 2;
    *(undefined4 *)(param_1 + (iVar8 + 1) * 0xc + 0x1bc) = 0;
    iVar8 = iVar8 + 2;
  } while (uVar3 < 0x20);
  iVar8 = 0;
  uVar3 = 0;
  do {
    if ((param_5 & 1 << (uVar3 & 0xff)) != 0) {
      iVar2 = param_1 + iVar8 * 0xc;
      if (*(int *)(iVar2 + 0x1bc) != 0) {
        uVar5 = (uVar3 - *(int *)(iVar2 + 0x1b8)) + 1;
        if (*(byte *)(param_1 + 0x1aa) < uVar5) {
          iVar8 = iVar8 + 1;
        }
        else {
          *(uint *)(iVar2 + 0x1bc) = uVar5;
        }
        if (*(int *)(param_1 + iVar8 * 0xc + 0x1bc) != 0) goto LAB_000cd3c4;
      }
      iVar2 = param_1 + iVar8 * 0xc;
      *(uint *)(iVar2 + 0x1b8) = uVar3;
      *(undefined4 *)(iVar2 + 0x1bc) = 1;
      FUN_00002940(auStack_b8,0x80,u__02u_Track_wav_000cd444,uVar3 + 1);
      piVar7 = (int *)(iVar2 + 0x1c0);
      iVar2 = FUN_00003544(auStack_b8);
      if (iVar2 == 0) {
        if (*(int *)(*piVar7 + -0xc) == 0) {
          *(undefined4 *)(*piVar7 + -4) = 0;
          *(undefined2 *)*piVar7 = 0;
        }
        else {
          FUN_001d9b00(piVar7);
          *piVar7 = iVar1;
        }
      }
      else {
        FUN_001d982c(piVar7,0,*(undefined4 *)(*piVar7 + -4),auStack_b8,iVar2,0,iVar2);
      }
    }
LAB_000cd3c4:
    uVar3 = uVar3 + 1;
    if (0x1f < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000cd3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x118) + 0x28))
                (*(int **)(param_1 + 0x118),local_30,iVar8 + 1U & 0xff);
      return;
    }
  } while( true );
}

