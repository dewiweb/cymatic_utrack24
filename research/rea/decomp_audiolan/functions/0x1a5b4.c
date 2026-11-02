// rea decompile_all
// name: FUN_0001a5b4
// address: 0x1a5b4
// body: available
// range: 0x1a5b4-0x1a6e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001a5b4(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    *(undefined4 *)(param_2 + 0xb0) = 0;
    if (*(int *)(param_2 + 0xdc) != 0) {
      FUN_0001d49c(param_1);
      *(undefined4 *)(param_2 + 0xdc) = 0;
    }
    puVar2 = DAT_0001a6e4;
    if (*(int *)(param_2 + 0x234) != 0) {
      *(undefined1 *)(param_2 + 0xff) = 1;
      uVar6 = *puVar2;
      *(undefined4 *)(param_2 + 0x110) = puVar2[1];
      *(undefined4 *)(param_2 + 0x10c) = uVar6;
      *(undefined2 *)(param_2 + 0xf4) = *DAT_0001a6e8;
      if (*(int *)(param_2 + 0xf8) != 0) {
        FUN_000209a0();
        *(undefined4 *)(param_2 + 0xf8) = 0;
      }
    }
    if (param_3 != 0) {
      FUN_000209c2();
      iVar3 = FUN_0016dc78();
      iVar8 = *(int *)(param_2 + 4);
      piVar7 = *(int **)(iVar3 * 4 + param_1 + DAT_0001a6ec + 0x14);
      iVar3 = param_2 + 0x130;
      do {
        if (piVar7 == (int *)0x0) {
LAB_0001a6c2:
          FUN_0016db4c(*DAT_0001a6f8 + 2);
          *(int *)(param_2 + 0x10) = extraout_r1;
          *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0xdc) - extraout_r1;
          FUN_0003f5f0(param_1,param_2);
          return;
        }
        if ((piVar7[1] == iVar8) && (iVar4 = FUN_0003b48a(piVar7[4],iVar3), iVar4 != 0)) {
          if (piVar7 != (int *)0x0) {
            for (piVar7 = (int *)piVar7[2]; piVar7 != (int *)0x0; piVar7 = (int *)*piVar7) {
              if ((((*(char *)(piVar7 + 0x1e) == '\x02') && ((*(byte *)(piVar7 + 1) & 0x32) != 0))
                  && ((sVar1 = *(short *)((int)piVar7 + 6), sVar1 == 1 ||
                      ((sVar1 == 0x1c || (sVar1 == 5)))))) &&
                 (iVar3 = FUN_000241cc(piVar7,param_2), iVar3 != 0)) {
                if (*DAT_0001a6f0 == 0) {
                  return;
                }
                uVar6 = FUN_0002272c(piVar7 + 1,piVar7[9] + 4,param_1 + 0x37);
                uVar5 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
                FUN_00024642(3,DAT_0001a6f4,param_2,param_2 + 0x130,uVar5,uVar6);
                return;
              }
            }
          }
          goto LAB_0001a6c2;
        }
        piVar7 = (int *)*piVar7;
      } while( true );
    }
  }
  return;
}

