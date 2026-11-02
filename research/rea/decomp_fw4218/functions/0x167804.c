// rea decompile_all
// name: FUN_00167804
// address: 0x167804
// body: available
// range: 0x167804-0x1678d7 inclusive
// range: 0x167bfc-0x167daf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x167dac to 0x16a3f4 FUN_0016a3f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_00167804(int *param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [80];
  int iStack_34;
  
  piVar2 = DAT_00167db0;
  if (*param_1 == 0) {
    return;
  }
  bVar10 = 1999 < (uint)(param_2 - param_1[6]);
  iVar7 = DAT_00167db0[1];
  bVar9 = iVar7 == 0;
  if (bVar9) {
    iVar7 = DAT_00167db0[2];
  }
  if (bVar9 && iVar7 == 0) {
    iVar7 = DAT_00167db0[3];
    bVar9 = iVar7 == 0;
    if (bVar9) {
      iVar7 = *(int *)(DAT_00167db4 + 4);
    }
    if ((bVar9 && iVar7 == 0) && (iVar7 = *(int *)(DAT_00167db4 + 8), iVar7 == 0 && !bVar10))
    goto LAB_00167d90;
  }
  *DAT_00167db4 = 0;
  uVar3 = DAT_00167db8;
  iVar8 = param_1[1];
  if (iVar8 != 0) {
    for (iVar4 = *(int *)(iVar8 + 0x5c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x5c)) {
      iVar8 = iVar4;
    }
    if (iVar8 != 0) {
      iStack_34 = param_2 + 30000;
      do {
        switch(*(byte *)(iVar8 + 0x58) & 0xf) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((param_2 - *(int *)(iVar8 + 0x54)) - 30000U < uVar3) {
          uVar5 = *(ushort *)(iVar8 + 0x58);
          bVar9 = (uVar5 & 0xf) != 0;
          if (bVar9) {
            uVar5 = uVar5 & 0xf;
          }
          if (bVar9 && uVar5 != 4) {
            FUN_001683e4(param_1,*(undefined4 *)(iVar8 + 0xc),iVar8,0x21);
            uVar6 = *(byte *)(iVar8 + 0x58) & 0xf;
            piVar2[uVar6] = piVar2[uVar6] + -1;
            *(ushort *)(iVar8 + 0x58) = *(ushort *)(iVar8 + 0x58) & 0x1f0;
            iVar7 = *piVar2 + 1;
            *piVar2 = iVar7;
            *(undefined4 *)(iVar8 + 0xc) = 0;
          }
        }
        if (iVar8 == 0) {
          iVar8 = param_1[1];
          if (iVar8 == 0) break;
          for (iVar4 = *(int *)(iVar8 + 0x5c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x5c)) {
            iVar8 = iVar4;
          }
        }
        else {
          pbVar1 = (byte *)(iVar8 + 100);
          iVar8 = *(int *)(iVar8 + 0x60);
          iVar4 = iVar8;
          if ((*pbVar1 & 0x80) == 0) {
            do {
              iVar8 = iVar4;
              if (iVar8 == 0) goto LAB_00167cd8;
              iVar4 = *(int *)(iVar8 + 0x5c);
            } while (*(int *)(iVar8 + 0x5c) != 0);
          }
        }
      } while (iVar8 != 0);
    }
  }
LAB_00167cd8:
  if (bVar10) {
    if (param_1[2] == 0) {
      iVar8 = param_1[1];
      if (iVar8 != 0) {
        iVar7 = *(int *)(iVar8 + 0x5c);
      }
      if (iVar8 != 0 && iVar7 != 0) {
        do {
          iVar8 = iVar7;
          iVar7 = *(int *)(iVar8 + 0x5c);
        } while (*(int *)(iVar8 + 0x5c) != 0);
      }
      param_1[2] = iVar8;
      if (iVar8 == 0) goto LAB_00167d88;
    }
    FUN_001512cc(&uStack_98);
    FUN_0014fdd0(&uStack_98,param_1[2],(*(byte *)(param_1[2] + 0x58) & 0x1f) >> 4);
    (**(code **)(*(int *)param_1[3] + 0xc))((int *)param_1[3],&uStack_98);
    iVar7 = FUN_0022bfb8(param_1,param_1[2]);
    param_1[2] = iVar7;
    FUN_0015111c(&uStack_98);
    FUN_0014ca10(auStack_84);
    FUN_0014ca10(auStack_8c);
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
LAB_00167d88:
  iVar7 = FUN_001d06b8();
  param_1[6] = iVar7;
LAB_00167d90:
  if (*piVar2 == 0) {
    return;
  }
  FUN_0016a3f4(param_1);
  return;
}

