// rea decompile_all
// name: FUN_001b0c14
// address: 0x1b0c14
// body: available
// range: 0x1b0c14-0x1b0e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001b0c14(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uStack_48;
  int aiStack_44 [3];
  uint uStack_38;
  uint auStack_34 [2];
  uint uStack_2c;
  int aiStack_28 [3];
  
  if (*param_2 != '/') {
    return param_2;
  }
  cVar1 = param_2[1];
  iVar6 = 1;
  while( true ) {
    if (cVar1 == '\0') {
      return param_2 + 1;
    }
    if (cVar1 == '/') break;
    iVar6 = iVar6 + 1;
    cVar1 = param_2[iVar6];
  }
  uVar2 = FUN_00003738(param_2);
  aiStack_44[0] = DAT_001b0e20;
  if (uVar2 != 0) {
    puVar4 = &uStack_2c;
    if (0x80 < uVar2) {
      puVar4 = auStack_34;
    }
    auStack_34[0] = uVar2;
    uStack_2c = 0x80;
    aiStack_44[0] = FUN_002328a0(aiStack_44,*puVar4,uVar2);
  }
  aiStack_44[0] = aiStack_44[0] + 0xc;
  FUN_000039e0(aiStack_44[0],param_2,uVar2);
  uVar2 = iVar6 - 1;
  if (*(int *)(aiStack_44[0] + -4) == 0) {
    uStack_48 = 0;
    FUN_00173800(9,&DAT_001b0e24,&DAT_001b0e24,1);
  }
  uVar5 = *(int *)(aiStack_44[0] + -4) - 1;
  if (uVar2 < uVar5) {
    uVar5 = uVar2;
  }
  if (uVar2 == 0xffffffff) {
    uVar2 = 0;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    aiStack_28[0] = FUN_002328a0(aiStack_28,0,uVar5);
  }
  else {
    auStack_34[0] = uVar2;
    uStack_38 = 0x80;
    puVar4 = &uStack_38;
    if (0x80 < uVar2) {
      puVar4 = auStack_34;
    }
    aiStack_28[0] = FUN_002328a0(aiStack_28,*puVar4,uVar5);
  }
  aiStack_28[0] = aiStack_28[0] + 0xc;
  FUN_000039e0(aiStack_28[0],aiStack_44[0] + 1,uVar5);
  FUN_002329f0(aiStack_44);
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar3 + -4);
  if (uVar2 == *(uint *)(aiStack_28[0] + -4)) {
    uStack_48 = uVar2;
    auStack_34[0] = *(uint *)(aiStack_28[0] + -4);
    puVar4 = &uStack_48;
    if (*(uint *)(aiStack_28[0] + -4) < uVar2) {
      puVar4 = auStack_34;
    }
    iVar3 = FUN_00003658(iVar3,aiStack_28[0],*puVar4);
    if ((iVar3 == 0) && (*(int *)(*(int *)(param_1 + 4) + -4) == *(int *)(aiStack_28[0] + -4))) {
      FUN_002329f0(aiStack_28);
      return param_2 + iVar6 + 1;
    }
  }
  FUN_00002898(s_ERROR__ConfigNode__getRelativeSi_001b0e28,param_2);
  FUN_002329f0(aiStack_28);
  return (char *)0x0;
}

