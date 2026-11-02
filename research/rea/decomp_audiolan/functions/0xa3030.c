// rea decompile_all
// name: FUN_000a3030
// address: 0xa3030
// body: available
// range: 0xa3030-0xa32eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000a3030(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = (int *)FUN_0006fc90(param_1,s_RavennaController_000a32f0,0,0x40,DAT_000a32ec,DAT_000a32ec
                               ,DAT_000a32ec,DAT_000a32ec,DAT_000a32ec,DAT_000a32ec);
  iVar3 = DAT_000a3304;
  iVar6 = DAT_000a3304 + 0x1a4;
  piVar1[0x4a] = DAT_000a3304 + 0x1b4;
  piVar1[0x4e] = param_3;
  piVar1[0x47] = iVar3 + 0x178;
  piVar1[0x46] = iVar3 + 0x15c;
  piVar1[0x45] = iVar3 + 0xfc;
  *piVar1 = iVar3;
  piVar1[0x4b] = iVar3 + 0x1c8;
  piVar1[0x4c] = iVar3 + 0x200;
  piVar1[0x4d] = param_2;
  piVar1[0x48] = iVar3 + 400;
  piVar1[0x49] = iVar6;
  piVar5 = piVar1 + 0x4f;
  *piVar5 = 0;
  piVar1[0x53] = 0;
  piVar1[0x54] = 0;
  *(undefined1 *)(piVar1 + 0x55) = 0;
  *(char *)((int)piVar1 + 0x155) = (char)(iVar3 + 0x1c8);
  piVar1[0x52] = 0;
  piVar1[0x51] = 0;
  piVar1[0x50] = 0;
  piVar2 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x50,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar5;
  piVar2[1] = 1;
  *piVar5 = (int)piVar2;
  puVar4 = (undefined1 *)piVar2[2];
  piVar1[0x51] = (int)puVar4;
  piVar1[0x52] = (int)(puVar4 + 0x50);
  piVar1[0x51] = (int)(puVar4 + 0x50);
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined4 *)(puVar4 + 0xc) = 0;
  *puVar4 = 0;
  piVar1[0x53] = (int)puVar4;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(int *)(piVar1[0x53] + 8) = piVar1[0x53];
  *(int *)(piVar1[0x53] + 0xc) = piVar1[0x53];
  piVar2 = piVar1 + 0x56;
  *piVar2 = 0;
  piVar1[0x57] = 0;
  piVar1[0x58] = 0;
  piVar1[0x59] = 0;
  piVar1[0x5a] = 0;
  piVar1[0x5b] = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x6c,0);
  piVar5[2] = iVar3;
  *piVar5 = *piVar2;
  piVar5[1] = 1;
  *piVar2 = (int)piVar5;
  iVar3 = piVar5[2];
  piVar1[0x58] = iVar3;
  piVar1[0x59] = iVar3 + 0x6c;
  piVar1[0x5a] = iVar3;
  piVar1[0x58] = iVar3 + 0x6c;
  *(int *)iVar3 = iVar3;
  *(int *)(piVar1[0x5a] + 4) = piVar1[0x5a];
  piVar2 = piVar1 + 0x5c;
  *piVar2 = 0;
  piVar1[0x5d] = 0;
  piVar1[0x5e] = 0;
  piVar1[0x5f] = 0;
  piVar1[0x60] = 0;
  piVar1[0x61] = 0;
  piVar5 = (int *)FUN_0010f82c(0xc,0);
  iVar3 = FUN_0010f82c(0x74,0);
  piVar5[2] = iVar3;
  *piVar5 = *piVar2;
  piVar5[1] = 1;
  *piVar2 = (int)piVar5;
  iVar3 = piVar5[2];
  piVar1[0x5e] = iVar3;
  piVar1[0x5f] = iVar3 + 0x74;
  piVar1[0x60] = iVar3;
  piVar1[0x5e] = iVar3 + 0x74;
  *(int *)iVar3 = iVar3;
  *(int *)(piVar1[0x60] + 4) = piVar1[0x60];
  *(undefined1 *)(piVar1 + 0x66) = *(undefined1 *)(param_2 + 0x14c);
  *(undefined1 *)((int)piVar1 + 0x199) = 0;
  *(undefined1 *)((int)piVar1 + 0x19a) = 0;
  *(undefined1 *)((int)piVar1 + 0x19b) = 0xff;
  piVar1[0x67] = 0;
  piVar1[0x68] = 0;
  piVar1[0x69] = 0;
  iVar3 = FUN_000daf68(piVar1 + 0x6a,piVar1 + 0x49);
  iVar6 = iVar3 + -0x1a8;
  *(undefined4 *)(iVar3 + 0x3f0) = DAT_000a3308;
  *(undefined4 *)(iVar3 + 0x3ec) = 0;
  *(undefined4 *)(iVar3 + 0x3f8) = 0;
  FUN_001a07ac(iVar3 + 0x3f4,s_CIDLock_000a330c);
  *(undefined4 *)(iVar3 + 0x418) = 0;
  *(undefined4 *)(iVar3 + 0x41c) = 0;
  *(undefined4 *)(iVar3 + 0x420) = 0;
  *(undefined4 *)(iVar3 + 0x424) = 0;
  FUN_000b97ac(*(undefined4 *)(iVar3 + -0x74),iVar3 + -0x94);
  if (*(char *)(iVar3 + 0xbc) == '\x01' || *(char *)(iVar3 + 0xbc) == '\x04') {
    FUN_000dacc0(iVar3,*(undefined4 *)(*(int *)(iVar3 + -0x74) + 0x180),
                 *(undefined4 *)(*(int *)(iVar3 + -0x74) + 0x184));
  }
  *(undefined1 *)(iVar3 + -0xd) = *(undefined1 *)(*(int *)(iVar3 + -0x74) + 0x251);
  FUN_000e3780(iVar3 + -0x80);
  *DAT_000a3314 = iVar6;
  FUN_0006e024(iVar6);
  return iVar6;
}

