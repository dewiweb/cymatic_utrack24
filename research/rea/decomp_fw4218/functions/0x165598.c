// rea decompile_all
// name: FUN_00165598
// address: 0x165598
// body: available
// range: 0x165598-0x16573b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x165690 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x165738 to 0x4060 thunk_FUN_00004068 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00165598(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1[0x13] == 0) {
    return;
  }
  piVar3 = (int *)FUN_001f00bc(param_1 + 7);
  piVar5 = (int *)param_1[1];
  if (piVar5 != (int *)0x0) {
    piVar3 = (int *)*piVar5;
  }
  if (piVar5 != (int *)0x0 && piVar3 != (int *)0x0) {
    do {
      piVar5 = piVar3;
      piVar3 = (int *)*piVar5;
    } while ((int *)*piVar5 != (int *)0x0);
  }
  iVar7 = *param_1;
  if ((iVar7 != 0) &&
     (puVar4 = (undefined4 *)FUN_001c6a94(iVar7 * 0xc + 8,DAT_0016573c), puVar4 != (undefined4 *)0x0
     )) {
    *puVar4 = 0xc;
    puVar4[1] = iVar7;
    iVar7 = FUN_001c70d8(puVar4 + 2,DAT_00165740,0xc,iVar7);
    uVar8 = 0;
    if (iVar7 != 0) {
      while (piVar5 != (int *)0x0) {
        if (((char)piVar5[0x15] != '\0') && ((uint)piVar5[0xe] <= (uint)piVar5[0x14])) {
          iVar1 = uVar8 * 0xc;
          uVar8 = uVar8 + 1;
          FUN_0014cdc0(iVar7 + iVar1,piVar5 + 4);
          *(undefined1 *)(piVar5 + 0x15) = 0;
          FUN_00029894(param_1 + 0x13);
        }
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)param_1[1];
          if (piVar5 == (int *)0x0) break;
          for (piVar3 = (int *)*piVar5; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
            piVar5 = piVar3;
          }
        }
        else {
          pbVar2 = (byte *)(piVar5 + 2);
          piVar5 = (int *)piVar5[1];
          piVar3 = piVar5;
          if ((*pbVar2 & 0x80) == 0) {
            do {
              piVar5 = piVar3;
              if (piVar5 == (int *)0x0) goto LAB_001656e0;
              piVar3 = (int *)*piVar5;
            } while ((int *)*piVar5 != (int *)0x0);
          }
        }
      }
LAB_001656e0:
      FUN_001f06d4(param_1 + 7);
      uVar6 = 0;
      if (uVar8 != 0) {
        do {
          (**(code **)(*(int *)param_1[0x12] + 8))
                    ((int *)param_1[0x12],0,iVar7 + uVar6 * 0xc,uVar6 == uVar8 - 1);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      thunk_FUN_00004068(iVar7,DAT_00165744);
      return;
    }
  }
  FUN_001f06d4(param_1 + 7);
  return;
}

