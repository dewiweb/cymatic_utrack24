// rea decompile_all
// name: FUN_00619910
// address: 0x619910
// body: available
// range: 0x619910-0x619b24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00619910(int param_1,int param_2,int param_3,uint param_4,char *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint in_EDX;
  int iVar5;
  int iVar6;
  
  iVar5 = 1;
  if ((param_5 == (char *)0x0) || (*param_5 != '1')) {
    return 0xfffffffa;
  }
  if (in_ECX == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (*(int *)(in_ECX + 0x20) == 0) {
    *(code **)(in_ECX + 0x20) = FUN_00614140;
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    *(code **)(in_ECX + 0x24) = FUN_00614130;
  }
  uVar4 = 6;
  if (in_EDX != 0xffffffff) {
    uVar4 = in_EDX;
  }
  if (param_2 < 0) {
    iVar5 = 0;
    param_2 = -param_2;
  }
  else if (0xf < param_2) {
    iVar5 = 2;
    param_2 = param_2 + -0x10;
  }
  if ((((param_3 - 1U < 9) && (param_1 == 8)) && (param_2 - 8U < 8)) &&
     ((uVar4 < 10 && (param_4 < 5)))) {
    if (param_2 == 8) {
      param_2 = 9;
    }
    piVar2 = (int *)(**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),1,0x16c0);
    if (piVar2 != (int *)0x0) {
      *(int **)(in_ECX + 0x1c) = piVar2;
      piVar2[6] = iVar5;
      piVar2[0xc] = param_2;
      iVar6 = 1 << ((byte)param_2 & 0x1f);
      *piVar2 = in_ECX;
      piVar2[7] = 0;
      piVar2[0x14] = param_3 + 7;
      piVar2[0xd] = iVar6 + -1;
      iVar5 = 1 << ((byte)(param_3 + 7) & 0x1f);
      piVar2[0x13] = iVar5;
      piVar2[0x15] = iVar5 + -1;
      piVar2[0xb] = iVar6;
      piVar2[0x16] = (param_3 + 9U) / 3;
      iVar5 = (**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),iVar6,2);
      piVar2[0xe] = iVar5;
      iVar5 = (**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),piVar2[0xb],2);
      piVar2[0x10] = iVar5;
      iVar5 = (**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),piVar2[0x13],2);
      piVar2[0x11] = iVar5;
      iVar5 = 1 << ((char)param_3 + 6U & 0x1f);
      piVar2[0x5a7] = iVar5;
      iVar5 = (**(code **)(in_ECX + 0x20))(*(undefined4 *)(in_ECX + 0x28),iVar5,4);
      uVar1 = piVar2[0x5a7];
      piVar2[2] = iVar5;
      piVar2[3] = uVar1 * 4;
      if (((piVar2[0xe] != 0) && (piVar2[0x10] != 0)) && ((piVar2[0x11] != 0 && (iVar5 != 0)))) {
        *(undefined1 *)(piVar2 + 9) = 8;
        piVar2[0x5a9] = iVar5 + (uVar1 & 0xfffffffe);
        piVar2[0x5a6] = iVar5 + uVar1 * 3;
        piVar2[0x21] = uVar4;
        piVar2[0x22] = param_4;
        uVar3 = FUN_00619870();
        return uVar3;
      }
      piVar2[1] = 0x29a;
      *(char **)(in_ECX + 0x18) = "insufficient memory";
      FUN_00618e50();
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}

