// rea decompile_all
// name: FUN_0022a370
// address: 0x22a370
// body: available
// range: 0x22a370-0x22a483 inclusive
// range: 0x22a486-0x22a4af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0022a370(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_30 [8];
  int local_28;
  int local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  cVar1 = *(char *)(*(int *)(param_2 + 8) + 4);
  if (cVar1 == '\0') {
    iVar6 = param_2 + 0x14;
    local_20 = param_2 + 0x94;
    while (uVar8 = *(uint *)(param_2 + 0x118), uVar5 = FUN_001b91cc(param_2), uVar8 < uVar5) {
      uVar5 = FUN_001b91b2(iVar6);
      iVar2 = FUN_001b91cc(param_2);
      if (uVar5 < (uint)(iVar2 - *(int *)(param_2 + 0x118))) {
        iVar2 = FUN_001b91b2(iVar6);
      }
      else {
        iVar2 = FUN_001b91cc(param_2);
        iVar2 = iVar2 - *(int *)(param_2 + 0x118);
      }
      FUN_001b91a8(auStack_18,iVar6);
      uVar3 = FUN_001b3cb0(auStack_18);
      FUN_001b91a8(auStack_1c,iVar6);
      uVar4 = FUN_001b3cc0(auStack_1c);
      FUN_001ae4ec(auStack_30,0,uVar4,uVar3);
      FUN_00079844(auStack_1c);
      FUN_00079844(auStack_18);
      *(int *)(local_28 + 0x814) = *(int *)(param_2 + 0x114) + *(int *)(param_2 + 0x118);
      *(int *)(param_2 + 0x118) = *(int *)(param_2 + 0x118) + iVar2;
      FUN_001ae420(auStack_30,iVar2);
      iVar7 = *(int *)(param_2 + 0x118);
      iVar2 = FUN_001b91cc(param_2);
      FUN_001ae45c(auStack_30,iVar7 == iVar2);
      iVar2 = FUN_000e89bc(iVar6,auStack_30);
      if (iVar2 != 0) {
        FUN_00002898(s_ERROR__BOTSeqDataOut__handle__TX_0022a4b0);
        *(undefined4 *)(local_20 + 0x20) = 0;
        FUN_001ae614(auStack_30);
        break;
      }
      FUN_001ae614(auStack_30);
    }
    *(undefined4 *)(local_20 + 0x20) = 0;
    FUN_000660f4(param_2);
    uVar3 = DAT_0022a4e8;
  }
  else if (cVar1 == '\x02') {
    FUN_00066134(param_2);
    uVar3 = DAT_0022a4f0;
  }
  else {
    if (cVar1 != '\x03') {
      bVar9 = cVar1 == '\x05';
      do {
        if (bVar9) {
          *(undefined1 *)(param_2 + 0x100) = 1;
          *(undefined1 *)(param_2 + 0x101) = 4;
          FUN_00201c14(param_2);
          *(undefined4 *)(param_2 + 0xc) = DAT_0022a4f4;
          return 1;
        }
        bVar9 = true;
      } while (cVar1 == '\x06');
      return 0;
    }
    FUN_00066070(param_2);
    uVar3 = DAT_0022a4ec;
  }
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  return 1;
}

