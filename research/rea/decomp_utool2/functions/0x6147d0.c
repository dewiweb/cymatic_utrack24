// rea decompile_all
// name: FUN_006147d0
// address: 0x6147d0
// body: available
// range: 0x6147d0-0x6149d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006147d0(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int *in_ECX;
  uint uVar3;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  local_8 = 0;
  if (in_ECX[0x21] < 1) {
    uVar4 = param_1 + 5;
    uVar5 = uVar4;
  }
  else {
    if ((param_1 != 0) && (*(int *)(*in_ECX + 0x2c) == 2)) {
      FUN_006142e0();
    }
    FUN_00615590();
    FUN_00615590();
    local_8 = FUN_00614eb0();
    uVar3 = in_ECX[0x5aa] + 10U >> 3;
    uVar4 = in_ECX[0x5ab] + 10U >> 3;
    uVar5 = uVar4;
    if (uVar3 < uVar4) {
      uVar5 = uVar3;
    }
  }
  if ((uVar5 < param_1 + 4U) || (in_EDX == 0)) {
    sVar2 = (short)param_2;
    if ((in_ECX[0x22] == 4) || (uVar4 == uVar5)) {
      iVar1 = in_ECX[0x5af];
      if (iVar1 < 0xe) {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | sVar2 + 2 << ((byte)iVar1 & 0x1f);
        in_ECX[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | sVar2 + 2U << ((byte)iVar1 & 0x1f);
        *(char *)(in_ECX[2] + in_ECX[5]) = (char)in_ECX[0x5ae];
        in_ECX[5] = in_ECX[5] + 1;
        *(undefined1 *)(in_ECX[5] + in_ECX[2]) = *(undefined1 *)((int)in_ECX + 0x16b9);
        iVar1 = in_ECX[0x5af];
        in_ECX[5] = in_ECX[5] + 1;
        in_ECX[0x5af] = in_ECX[0x5af] + -0xd;
        *(ushort *)(in_ECX + 0x5ae) = (ushort)(sVar2 + 2U) >> (0x10U - (char)iVar1 & 0x1f);
      }
      FUN_006143c0(&DAT_00bfe360);
    }
    else {
      iVar1 = in_ECX[0x5af];
      if (iVar1 < 0xe) {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | sVar2 + 4 << ((byte)iVar1 & 0x1f);
        in_ECX[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(in_ECX + 0x5ae) =
             *(ushort *)(in_ECX + 0x5ae) | sVar2 + 4U << ((byte)iVar1 & 0x1f);
        *(char *)(in_ECX[2] + in_ECX[5]) = (char)in_ECX[0x5ae];
        in_ECX[5] = in_ECX[5] + 1;
        *(undefined1 *)(in_ECX[5] + in_ECX[2]) = *(undefined1 *)((int)in_ECX + 0x16b9);
        iVar1 = in_ECX[0x5af];
        in_ECX[5] = in_ECX[5] + 1;
        in_ECX[0x5af] = in_ECX[0x5af] + -0xd;
        *(ushort *)(in_ECX + 0x5ae) = (ushort)(sVar2 + 4U) >> (0x10U - (char)iVar1 & 0x1f);
      }
      FUN_00614c70(in_ECX[0x2ca] + 1,local_8 + 1);
      FUN_006143c0(in_ECX + 0x262);
    }
  }
  else {
    FUN_00614bc0(param_1,param_2);
  }
  FUN_00615b40();
  if (param_2 != 0) {
    FUN_006141e0();
  }
  return;
}

