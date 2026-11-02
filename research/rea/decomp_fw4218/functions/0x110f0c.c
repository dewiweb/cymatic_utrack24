// rea decompile_all
// name: FUN_00110f0c
// address: 0x110f0c
// body: available
// range: 0x110f0c-0x111073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00110f0c(undefined4 param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined1 auStack_278 [8];
  undefined2 local_270;
  ushort local_26e;
  undefined4 local_26c;
  ushort local_262;
  ushort local_248 [256];
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34 [3];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  iVar3 = 0;
  cVar2 = *(char *)*param_2;
  while (cVar2 != '\0') {
    puVar6 = local_248 + iVar3;
    pbVar1 = (byte *)(*param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar6 = (ushort)*pbVar1;
    cVar2 = *(char *)(*param_2 + iVar3);
  }
  local_248[iVar3] = 0;
  FUN_00231ef4(auStack_28,local_248,auStack_24);
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 0;
  iVar3 = FUN_00110ec0(auStack_28,auStack_278,auStack_20,&local_38,local_34,&local_48,&local_44);
  if (iVar3 != 0) {
    iVar3 = (int)local_40 - (int)local_44;
    uVar4 = FUN_00006604(local_34[0],(uint)local_26e * (uint)(local_262 >> 3));
    FUN_00002898(_DAT_00111074,local_26c,local_262,(uint)local_26e,local_270,local_38,local_34[0],
                 local_48,uVar4,iVar3 >> 2);
    puVar5 = local_44;
    iVar3 = 0;
    if (local_40 != local_44) {
      do {
        FUN_00002898(s___Marker__3u___u_00111076 + 2,iVar3,*puVar5);
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + 1;
      } while (local_40 != puVar5);
    }
  }
  FUN_00173a54(local_44,local_3c - (int)local_44 >> 2,0);
  FUN_00232190(auStack_28);
  return 0;
}

