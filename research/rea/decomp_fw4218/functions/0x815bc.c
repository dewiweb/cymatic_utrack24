// rea decompile_all
// name: FUN_000815bc
// address: 0x815bc
// body: available
// range: 0x815bc-0x818ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000815bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 local_1c;
  
  local_1c = param_4;
  FUN_000f4e84();
  uVar3 = FUN_000f4fc0();
  iVar4 = FUN_001b5844(uVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_0022e24c(*DAT_000818f4);
    if (iVar4 == 0) {
      if (*DAT_000818f8 == '\x01') {
        puVar6 = (undefined4 *)FUN_002444e4(DAT_00081900,*DAT_000818fc);
        iVar4 = DAT_00081904;
        *(undefined4 *)(DAT_00081904 + 0x54) = *puVar6;
        uVar3 = FUN_0008264c(param_1,1,*DAT_00081908,*(undefined4 *)(iVar4 + 0x54));
        iVar4 = DAT_00081904;
        *(undefined4 *)(DAT_00081904 + 0x54) = uVar3;
        iVar4 = FUN_00083c28(param_1,*(undefined4 *)(iVar4 + 0x54));
        piVar5 = DAT_0008190c;
        *DAT_0008190c = iVar4;
        *DAT_000818fc = *piVar5 + 1;
        uVar7 = FUN_0022eebc(DAT_00081900);
        if (*DAT_000818fc < uVar7) {
          puVar6 = (undefined4 *)FUN_002444e4(DAT_00081900,*DAT_000818fc);
          *(undefined4 *)(DAT_00081910 + 0x54) = *puVar6;
        }
        else {
          puVar6 = (undefined4 *)FUN_002444e4(DAT_00081900,0);
          *(undefined4 *)(DAT_00081910 + 0x54) = *puVar6;
          *DAT_000818fc = 0;
        }
        uVar3 = FUN_0008264c(param_1,1,*DAT_00081908,*(undefined4 *)(DAT_00081910 + 0x54));
        *(undefined4 *)(DAT_00081910 + 0x54) = uVar3;
      }
      else {
        iVar4 = *(int *)(DAT_00081904 + 0x54);
        if ((*(int *)(DAT_00081910 + 0x54) == -1) ||
           (uVar7 = FUN_0022e20c(*DAT_000818f4), uVar7 <= *(uint *)(DAT_00081910 + 0x54))) {
          uVar7 = FUN_0022e20c(*DAT_000818f4);
          iVar1 = DAT_00081904;
          if (((uVar7 <= *(uint *)(DAT_00081910 + 0x54)) || (*(int *)(DAT_00081910 + 0x54) == -1))
             && (param_2 != 0)) {
            *(undefined4 *)(DAT_00081904 + 0x54) = 0;
            uVar3 = FUN_0008264c(param_1,1,*DAT_00081908,*(undefined4 *)(iVar1 + 0x54));
            iVar1 = DAT_00081904;
            *(undefined4 *)(DAT_00081904 + 0x54) = uVar3;
            iVar2 = DAT_00081910;
            *(int *)(DAT_00081910 + 0x54) = *(int *)(iVar1 + 0x54) + 1;
            uVar3 = FUN_0008264c(param_1,1,*DAT_00081908,*(undefined4 *)(iVar2 + 0x54));
            *(undefined4 *)(DAT_00081910 + 0x54) = uVar3;
          }
        }
        else {
          *(undefined4 *)(DAT_00081904 + 0x54) = *(undefined4 *)(DAT_00081910 + 0x54);
          iVar1 = DAT_00081910;
          *(int *)(DAT_00081910 + 0x54) = *(int *)(DAT_00081910 + 0x54) + 1;
          uVar3 = FUN_0008264c(param_1,1,*DAT_00081908,*(undefined4 *)(iVar1 + 0x54));
          *(undefined4 *)(DAT_00081910 + 0x54) = uVar3;
        }
        if ((*(int *)(DAT_00081904 + 0x54) == iVar4) && (param_2 == 0)) {
          return 0;
        }
      }
      uVar3 = FUN_0023b208(*DAT_000818f4,*(undefined4 *)(DAT_00081904 + 0x54));
      FUN_00070a84(DAT_00081904,uVar3);
      FUN_00084608(param_1,*(undefined4 *)(DAT_00081910 + 0x54));
      if (*(int *)(DAT_00081910 + 0x54) != -1) {
        return 1;
      }
      return 0;
    }
  }
  else {
    iVar4 = FUN_00093a08(uVar3);
    local_1c = FUN_0023a74c(iVar4 + 0x30);
    piVar5 = (int *)FUN_0022da94(&local_1c);
    if (*piVar5 != *(int *)*DAT_000818f0) {
      FUN_00093a08(uVar3);
      FUN_0007ec88();
      return 1;
    }
  }
  return 0;
}

