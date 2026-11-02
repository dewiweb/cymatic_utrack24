// rea decompile_all
// name: FUN_001a7f58
// address: 0x1a7f58
// body: available
// range: 0x1a7f58-0x1a80d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a7f58(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int local_20;
  
  iVar3 = FUN_00003318(param_2,0x3d);
  local_20 = FUN_00003318(param_2 + 1,0x26);
  if (iVar3 != 0) {
    do {
      piVar1 = DAT_001a80d8;
      if ((code *)*DAT_001a80d8 == entry) {
        iVar4 = FUN_0019b388(iVar3 - param_2);
      }
      else {
        iVar4 = (*(code *)*DAT_001a80d8)(iVar3 - param_2);
      }
      if (iVar4 == 0) {
        return -4;
      }
      FUN_001a702a(iVar4,param_2 + 1,(iVar3 - param_2) + -1);
      FUN_0016f8dc(iVar4);
      if (local_20 == 0) {
        iVar5 = FUN_000034d0(param_2);
        if (((iVar5 + param_2) - iVar3) + 1 < 2) {
          pcVar6 = (code *)*DAT_001a80dc;
          goto joined_r0x001a801e;
        }
        if (*piVar1 == 0) {
          iVar5 = FUN_000034d0(param_2);
          iVar5 = FUN_0019b388(((iVar5 + param_2) - iVar3) + 1);
        }
        else {
          iVar5 = FUN_000034d0(param_2);
          iVar5 = (*(code *)*piVar1)(((iVar5 + param_2) - iVar3) + 1);
        }
        if (iVar5 == 0) {
          pcVar6 = (code *)*DAT_001a80dc;
          goto joined_r0x001a808c;
        }
        iVar7 = FUN_000034d0(param_2);
        FUN_001a702a(iVar5,iVar3 + 1,(iVar7 + param_2) - iVar3);
        FUN_0016f8dc(iVar5);
      }
      else {
        iVar7 = local_20 - iVar3;
        if (iVar7 < 2) {
          pcVar6 = (code *)*DAT_001a80dc;
joined_r0x001a801e:
          if (pcVar6 == entry) {
            FUN_0018a280(iVar4);
            return -5;
          }
          (*pcVar6)(iVar4);
          return -5;
        }
        if ((code *)*piVar1 == entry) {
          iVar5 = FUN_0019b388(iVar7);
        }
        else {
          iVar5 = (*(code *)*piVar1)(iVar7);
        }
        if (iVar5 == 0) {
          pcVar6 = (code *)*DAT_001a80dc;
joined_r0x001a808c:
          if (pcVar6 == entry) {
            FUN_0018a280(iVar4);
          }
          else {
            (*pcVar6)(iVar4);
          }
          return -4;
        }
        FUN_001a702a(iVar5,iVar3 + 1,iVar7 + -1);
        FUN_0016f8dc(iVar5);
      }
      iVar3 = FUN_001a7adc(param_1 + 0x1c,iVar4,iVar5);
      puVar2 = DAT_001a80dc;
      if (iVar3 != 0) {
        if ((code *)*DAT_001a80dc == entry) {
          FUN_0018a280(iVar4);
        }
        else {
          (*(code *)*DAT_001a80dc)(iVar4);
        }
        if ((code *)*puVar2 == entry) {
          FUN_0018a280(iVar5);
        }
        else {
          (*(code *)*puVar2)(iVar5);
        }
        return iVar3;
      }
      if (local_20 == 0) {
        return 0;
      }
      iVar3 = FUN_00003318(local_20,0x3d);
      iVar4 = FUN_00003318(local_20 + 1,0x26);
      param_2 = local_20;
      local_20 = iVar4;
    } while (iVar3 != 0);
  }
  return -5;
}

