// rea decompile_all
// name: FUN_0018cd4c
// address: 0x18cd4c
// body: available
// range: 0x18cd4c-0x18cecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018cd4c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  short extraout_r1;
  short extraout_r1_00;
  char *pcVar5;
  uint uVar6;
  
  iVar1 = FUN_001aa160(param_1,(**(byte **)(param_1 + 4) & 0xf) * -4);
  if ((iVar1 == 0) && (7 < *(ushort *)(param_1 + 10))) {
    pcVar5 = *(char **)(param_1 + 4);
    iVar1 = FUN_0018d5b0(pcVar5);
    if (iVar1 == 0) {
      piVar2 = (int *)*DAT_0018ced0;
      for (piVar4 = piVar2; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        if ((piVar4[1] == param_2) && (iVar1 = *param_3, piVar4[2] == iVar1)) {
          if (piVar4 == (int *)0x0) break;
          if (*pcVar5 != '\x11') {
            if ((*pcVar5 == '\x16') && (*(char *)((int)piVar4 + 0xd) == '\x01')) {
              *(undefined2 *)((int)piVar4 + 0xe) = 0;
              *(undefined1 *)((int)piVar4 + 0xd) = 2;
              *(undefined1 *)(piVar4 + 3) = 0;
            }
            break;
          }
          if (iVar1 == *DAT_0018ced4) {
            if ((pcVar5 == (char *)0xfffffffc) || (*(int *)(pcVar5 + 4) == 0)) {
              if (pcVar5[1] == '\0') {
                pcVar5[1] = '\n';
              }
              for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
                if ((piVar2[1] == param_2) && (piVar2[2] != *DAT_0018ced4)) {
                  uVar6 = (uint)(byte)pcVar5[1];
                  if ((*(char *)((int)piVar2 + 0xd) == '\x02') ||
                     ((*(char *)((int)piVar2 + 0xd) == '\x01' &&
                      ((*(ushort *)((int)piVar2 + 0xe) == 0 ||
                       (uVar6 < *(ushort *)((int)piVar2 + 0xe))))))) {
                    if (uVar6 == 0) {
                      uVar6 = 1;
                    }
                    uVar3 = FUN_000023ec();
                    FUN_00006158(uVar3,uVar6 - 1);
                    *(short *)((int)piVar2 + 0xe) = extraout_r1 + 1;
                    *(undefined1 *)((int)piVar2 + 0xd) = 1;
                  }
                }
              }
              break;
            }
          }
          else if ((pcVar5 == (char *)0xfffffffc) || (*(int *)(pcVar5 + 4) == 0)) break;
          if (iVar1 != *DAT_0018ced4) goto LAB_0018ce7a;
          piVar4 = piVar2;
          goto joined_r0x0018ce68;
        }
      }
    }
  }
LAB_0018cec4:
  FUN_001aa008(param_1);
  return;
joined_r0x0018ce68:
  if (piVar4 == (int *)0x0) goto LAB_0018cec4;
  if ((piVar4[1] == param_2) && (piVar4[2] == *(int *)(pcVar5 + 4))) {
    if (piVar4 != (int *)0x0) {
LAB_0018ce7a:
      uVar6 = (uint)(byte)pcVar5[1];
      if ((*(char *)((int)piVar4 + 0xd) == '\x02') ||
         ((*(char *)((int)piVar4 + 0xd) == '\x01' &&
          ((*(ushort *)((int)piVar4 + 0xe) == 0 || (uVar6 < *(ushort *)((int)piVar4 + 0xe))))))) {
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        uVar3 = FUN_000023ec();
        FUN_00006158(uVar3,uVar6 - 1);
        *(short *)((int)piVar4 + 0xe) = extraout_r1_00 + 1;
        *(undefined1 *)((int)piVar4 + 0xd) = 1;
      }
    }
    goto LAB_0018cec4;
  }
  piVar4 = (int *)*piVar4;
  goto joined_r0x0018ce68;
}

