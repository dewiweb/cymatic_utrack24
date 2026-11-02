// rea decompile_all
// name: FUN_00058d78
// address: 0x58d78
// body: available
// range: 0x58d78-0x58f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x58f38 to 0x6e1f4 FUN_0006e1f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00058d78(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_20;
  undefined1 auStack_1c [4];
  
  *param_1 = DAT_00058f3c;
  if (param_1[0x45] != 0) {
    if ((code *)*DAT_00058f40 == entry) {
      FUN_0018a280();
    }
    else {
      (*(code *)*DAT_00058f40)();
    }
    param_1[0x45] = 0;
  }
  iVar2 = FUN_001da44c(param_1 + 0x58);
  iVar2 = FUN_001da44c(iVar2 + -4);
  iVar2 = FUN_001da44c(iVar2 + -4);
  iVar2 = FUN_001da44c(iVar2 + -4);
  iVar2 = FUN_001da44c(iVar2 + -4);
  piVar8 = (int *)(iVar2 + -0x28);
  iVar3 = *(int *)(iVar2 + -0x18);
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar2 + -0x14) == 0) {
      while (iVar5 != iVar3) {
        iVar1 = *(int *)(iVar5 + 0xc);
        if (*(int *)(iVar5 + 0xc) == 0) {
          iVar1 = *(int *)(iVar5 + 4);
          iVar7 = iVar5;
          while (iVar6 = iVar1, iVar7 == *(int *)(iVar6 + 0xc)) {
            iVar7 = iVar6;
            iVar1 = *(int *)(iVar6 + 4);
          }
          if (*(int *)(iVar7 + 0xc) != iVar6) {
            iVar7 = iVar6;
          }
        }
        else {
          do {
            iVar7 = iVar1;
            iVar1 = *(int *)(iVar7 + 8);
          } while (*(int *)(iVar7 + 8) != 0);
        }
        local_20 = iVar5;
        FUN_001c1c88(auStack_1c,piVar8,&local_20);
        iVar5 = iVar7;
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
      while (iVar3 != 0) {
        FUN_001c22c8(piVar8,*(undefined4 *)(iVar3 + 0xc));
        iVar5 = *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + -0x24);
        *(int *)(iVar2 + -0x24) = iVar3;
        iVar3 = iVar5;
      }
      *(int *)(*(int *)(iVar2 + -0x18) + 8) = *(int *)(iVar2 + -0x18);
      *(undefined4 *)(*(int *)(iVar2 + -0x18) + 4) = 0;
      *(int *)(*(int *)(iVar2 + -0x18) + 0xc) = *(int *)(iVar2 + -0x18);
      *(undefined4 *)(iVar2 + -0x14) = 0;
    }
    iVar3 = *(int *)(iVar2 + -0x18);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + -0x24);
    *(int *)(iVar2 + -0x24) = iVar3;
    piVar4 = (int *)*piVar8;
    while (piVar4 != (int *)0x0) {
      *piVar8 = *piVar4;
      FUN_0010fa20(piVar4[2],piVar4[1],0);
      FUN_0010fa20(piVar4,1,0);
      piVar4 = (int *)*piVar8;
    }
  }
  iVar2 = FUN_0014fc34(iVar2 + -0x90);
  FUN_0006e1f4(iVar2 + -0xc0);
  return;
}

