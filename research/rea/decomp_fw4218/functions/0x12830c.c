// rea decompile_all
// name: FUN_0012830c
// address: 0x12830c
// body: available
// range: 0x12830c-0x128479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012830c(undefined4 param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStack_198 [36];
  short *local_174;
  undefined1 auStack_16c [8];
  byte local_164;
  undefined1 auStack_162 [34];
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined4 local_134 [5];
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [128];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar2 = (int *)FUN_000d6fe4(*DAT_0012847c);
  *param_3 = 0;
  for (pcVar8 = param_2; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
    cVar1 = FUN_000027ca();
    *pcVar8 = cVar1;
  }
  iVar3 = FUN_00003720(param_2,0x2f);
  if (iVar3 != 0) {
    FUN_0000360c(param_3,param_2,iVar3 - (int)param_2);
    param_2 = (char *)(iVar3 + 1);
  }
  FUN_000033f4(auStack_120,param_3,0x40);
  local_140 = auStack_120;
  if (piVar2 != (int *)0x0) {
    FUN_00231ef4(auStack_20,local_140,auStack_1c);
    (**(code **)(*piVar2 + 0x30))(piVar2,local_134,auStack_20);
    FUN_00231ebc(auStack_20);
  }
  FUN_001a7134(auStack_16c);
  iVar3 = 0;
  uVar9 = 0;
  FUN_000033f4(auStack_a0,param_2,0x40);
  local_13c = auStack_162;
  puVar7 = auStack_a0;
  while (piVar2 != (int *)0x0) {
    FUN_001a7134(auStack_198);
    iVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,local_134[0],auStack_198);
    if ((iVar4 != 0) || (*local_174 == 0)) {
      FUN_001a714e(auStack_198);
      break;
    }
    psVar5 = (short *)FUN_00003892(local_174,puVar7);
    if (psVar5 == local_174) {
      if (iVar3 == 0) {
        FUN_00003b88(auStack_16c,auStack_198,0x2c);
        uVar9 = FUN_000038be(local_174);
      }
      else {
        if (iVar3 == 1) {
          FUN_00002898(s__ls_00128480,local_13c);
        }
        FUN_00002898(&DAT_00128488,local_174);
        uVar6 = FUN_000038be(local_174);
        if (uVar6 < uVar9) {
          uVar9 = FUN_000038be(local_174);
        }
        while (iVar4 = FUN_00003816(local_13c,local_174,uVar9), iVar4 != 0) {
          uVar9 = uVar9 - 1;
        }
      }
      iVar3 = iVar3 + 1;
    }
    FUN_001a714e(auStack_198);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2,local_134[0]);
  if (iVar3 == 0) {
    FUN_000037b4(local_140,&DAT_00128490);
  }
  else {
    FUN_000037b4(local_140,&DAT_00128490);
    if (iVar3 != 1) {
      FUN_000037d0(local_140,local_13c,uVar9);
      goto LAB_00128468;
    }
    FUN_000037b4(local_140,local_13c);
    if (-1 < (int)((uint)local_164 << 0x1b)) goto LAB_00128468;
    puVar7 = &DAT_00128490;
  }
  FUN_000037b4(local_140,puVar7);
LAB_00128468:
  FUN_001a714e(auStack_16c);
  return;
}

