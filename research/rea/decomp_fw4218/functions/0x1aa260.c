// rea decompile_all
// name: FUN_001aa260
// address: 0x1aa260
// body: available
// range: 0x1aa260-0x1aa4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001aa260(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_40;
  int local_3c;
  int *local_30;
  undefined1 auStack_28 [4];
  
  iVar1 = FUN_000473e8(param_2,param_1 + 2);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__AudioMode__Could_NOT_get_t_001aa530);
  }
  else {
    iVar1 = FUN_0004febc(param_2,s_AudioModeID_001aa4dc,param_1);
    if (iVar1 == 0) {
      FUN_00002898(s_ERROR__AudioMode__Could_NOT_get___001aa568,s_AudioModeID_001aa4dc);
      return 0;
    }
    iVar1 = FUN_00048bd4(param_2,s_AudioModeName_001aa4e8,param_1 + 1);
    if (iVar1 != 0) {
      FUN_001aa088(param_1,param_2,s_ActiveStreams_001aa4f8,param_1 + 3);
      FUN_001aa088(param_1,param_2,s_ActiveOutputGroups_001aa508,param_1 + 9);
      FUN_00238334(&local_40,auStack_28);
      FUN_001aa088(param_1,param_2,s_ValidSamplingRates_001aa51c,&local_40);
      piVar5 = (int *)*local_30;
      if (piVar5 != local_30) {
        do {
          uVar6 = piVar5[2];
          if (uVar6 < 8) {
            uVar9 = FUN_00090db8(uVar6);
            iVar1 = (int)((ulonglong)uVar9 >> 0x20);
            if ((int)uVar9 == 0xff) {
              FUN_00002898(DAT_001aa590,uVar6,*param_1);
            }
            else {
              piVar2 = (int *)param_1[0x10];
              if (piVar2 != (int *)0x0) {
                iVar1 = *piVar2;
              }
              iVar7 = param_1[0x13];
              piVar4 = param_1 + 0xf;
              if (piVar2 != (int *)0x0) {
                param_1[0x10] = iVar1;
              }
              else {
                piVar2 = (int *)param_1[0x11];
                if (piVar2 == (int *)param_1[0x12]) {
                  uVar8 = 1;
                  if (*piVar4 != 0) {
                    uVar3 = *(uint *)(*piVar4 + 4);
                    uVar8 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
                    if (uVar8 < uVar3 + 1) {
                      uVar8 = uVar3 + 1;
                    }
                  }
                  piVar2 = (int *)FUN_00173860(0xc,0);
                  iVar1 = FUN_00173860(uVar8 * 0xc,0);
                  piVar2[2] = iVar1;
                  *piVar2 = *piVar4;
                  piVar2[1] = uVar8;
                  *piVar4 = (int)piVar2;
                  piVar2 = (int *)piVar2[2];
                  param_1[0x11] = piVar2;
                  param_1[0x12] = piVar2 + uVar8 * 3;
                }
                param_1[0x11] = piVar2 + 3;
              }
              if (piVar2 + 2 != (int *)0x0) {
                *(char *)(piVar2 + 2) = (char)uVar6;
              }
              *piVar2 = iVar7;
              piVar2[1] = *(int *)(iVar7 + 4);
              **(int **)(iVar7 + 4) = (int)piVar2;
              *(int **)(iVar7 + 4) = piVar2;
              param_1[0x14] = param_1[0x14] + 1;
            }
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != local_30);
      }
      if (local_30 != (int *)0x0) {
        FUN_002382d8(&local_40);
        *local_30 = local_3c;
        piVar5 = (int *)local_40;
        while (piVar5 != (int *)0x0) {
          local_40 = *piVar5;
          FUN_00173a54(piVar5[2],piVar5[1],0);
          FUN_00173a54(piVar5,1,0);
          piVar5 = (int *)local_40;
        }
      }
      return 1;
    }
    FUN_00002898(s_ERROR__AudioMode__Could_NOT_get___001aa568,s_AudioModeName_001aa4e8);
  }
  return 0;
}

