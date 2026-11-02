// rea decompile_all
// name: FUN_00034dd0
// address: 0x34dd0
// body: available
// range: 0x34dd0-0x34e63 inclusive
// range: 0x34e6c-0x34ed9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00034dd0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_88 [4];
  undefined4 local_84 [4];
  undefined1 auStack_74 [36];
  undefined1 auStack_50 [36];
  int local_2c;
  int iStack_1c;
  int local_18;
  
  iVar2 = param_1 + 0x284;
  iStack_1c = param_1;
  local_18 = param_2;
  uVar3 = FUN_00029c9a();
  if (9 < uVar3) {
    iVar7 = 0;
    FUN_00029be4(iVar2,auStack_88);
    FUN_00029be4(iVar2,local_84);
    iVar4 = FUN_00029ce6(iVar2,local_84[0]);
    if (iVar4 == 0) {
      local_2c = param_1 + 0x250;
      iVar4 = iVar7;
      do {
        iVar5 = FUN_00029c28(iVar2,local_84[0]);
        iVar7 = iVar4;
        if ((iVar5 == 0) || (iVar7 = iVar5, iVar4 == 0)) goto switchD_00034e62_caseD_0;
        if ((*(int *)(iVar5 + 4) == 0) || (*(int *)(iVar5 + 0xc) == 0))
        goto switchD_00034e62_caseD_1;
        iVar7 = iVar4;
        if (*(int *)(iVar4 + 4) != 0) {
          FUN_00024fcc(*(int *)(param_1 + 4) + 0xa0,auStack_74,*(undefined4 *)(iVar4 + 0xc),local_2c
                      );
          FUN_00024fcc(*(int *)(param_1 + 4) + 0xa0,auStack_50,*(undefined4 *)(iVar5 + 0xc),local_2c
                      );
          uVar6 = FUN_00025032(*(int *)(param_1 + 4) + 0xa0,auStack_74,auStack_50);
          switch(uVar6) {
          case 1:
          case 3:
switchD_00034e62_caseD_1:
            iVar7 = iVar5;
            break;
          case 5:
          case 6:
          case 7:
            if (*(byte *)(iVar5 + 0x26) < *(byte *)(iVar4 + 0x26)) goto switchD_00034e62_caseD_1;
          }
        }
switchD_00034e62_caseD_0:
        FUN_00029d38(iVar2,local_84);
        iVar5 = FUN_00029ce6(iVar2,local_84[0]);
        iVar4 = iVar7;
      } while (iVar5 == 0);
    }
    FUN_00029d4e(iVar2,iVar7);
    FUN_000272d2(iVar7);
  }
  FUN_00029b92(iVar2,local_18);
  if (*(int *)(local_18 + 0xc) != 0) {
    cVar1 = *(char *)(*(int *)(local_18 + 0xc) + 0x21);
    if ((int)*(char *)(param_1 + 0x26a) < (int)cVar1) {
      *(char *)(param_1 + 0x26a) = cVar1;
      iVar2 = FUN_001907c4((int)cVar1);
      FUN_00036b88(param_1 + 0x370,iVar2 << 2);
    }
  }
  return;
}

