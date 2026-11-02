// rea decompile_all
// name: FUN_00129d58
// address: 0x129d58
// body: available
// range: 0x129d58-0x129f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00129d58(int param_1,int *param_2,int *param_3,ushort *param_4)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  short local_30;
  
  uVar4 = 0;
  piVar2 = (int *)FUN_0012cd60(param_1 + 0x88);
  do {
    if ((piVar2 == (int *)0x0) || (0x4f < *param_4)) {
      return 1;
    }
    (**(code **)(*piVar2 + 0x5c))(&local_38,piVar2);
    if ((*param_2 == local_38 && param_2[1] == iStack_34) && (local_30 == (short)param_2[2])) {
      if (*param_4 == uVar4) {
        iVar3 = FUN_00160010(param_1 + 0x88);
        uVar4 = iVar3 + uVar4 & 0xfffeffff;
        iVar3 = FUN_0016d774(uVar4 * 10,DAT_00129f08);
        if ((iVar3 == 0) || (iVar3 = FUN_0016dd70(iVar3,DAT_00129f0c,10,uVar4), iVar3 == 0)) {
          return 0;
        }
        FUN_00003628(iVar3,*param_3,(uint)*param_4 * 10);
        FUN_0016d744(*param_3);
        *param_3 = iVar3;
      }
      uVar1 = *(undefined2 *)((int)piVar2 + 0xf2);
      local_3c = (**(code **)(*piVar2 + 0xe8))(piVar2);
      local_40 = (**(code **)(*piVar2 + 0xf8))(piVar2);
      local_44 = (**(code **)(*piVar2 + 0xfc))(piVar2);
      local_48 = (**(code **)(*piVar2 + 0xec))(piVar2);
      local_4e = (undefined2)local_3c;
      local_4c = (undefined2)local_40;
      local_4a = (undefined2)local_44;
      local_50 = uVar1;
      FUN_00003628(*param_3 + (uint)*param_4 * 10,&local_50,10);
      *param_4 = *param_4 + 1;
    }
    piVar2 = (int *)FUN_0012caa0(param_1 + 0x88,piVar2);
  } while( true );
}

