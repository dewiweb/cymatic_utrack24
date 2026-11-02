// rea decompile_all
// name: FUN_00614c70
// address: 0x614c70
// body: available
// range: 0x614c70-0x614eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00614c70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  ushort uVar4;
  
  iVar3 = *(int *)(in_ECX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_ECX + 0x16b8) =
         *(ushort *)(in_ECX + 0x16b8) | (short)in_EDX + -0x101 << ((byte)iVar3 & 0x1f);
    *(int *)(in_ECX + 0x16bc) = iVar3 + 5;
  }
  else {
    uVar4 = (short)in_EDX - 0x101;
    *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar4 << ((byte)iVar3 & 0x1f);
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b8);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b9);
    cVar1 = *(char *)(in_ECX + 0x16bc);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xb;
    *(ushort *)(in_ECX + 0x16b8) = uVar4 >> (0x10U - cVar1 & 0x1f);
  }
  iVar3 = *(int *)(in_ECX + 0x16bc);
  if (iVar3 < 0xc) {
    *(ushort *)(in_ECX + 0x16b8) =
         *(ushort *)(in_ECX + 0x16b8) | (short)param_1 + -1 << ((byte)iVar3 & 0x1f);
    *(int *)(in_ECX + 0x16bc) = iVar3 + 5;
  }
  else {
    uVar4 = (short)param_1 - 1;
    *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar4 << ((byte)iVar3 & 0x1f);
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b8);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b9);
    cVar1 = *(char *)(in_ECX + 0x16bc);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xb;
    *(ushort *)(in_ECX + 0x16b8) = uVar4 >> (0x10U - cVar1 & 0x1f);
  }
  iVar3 = *(int *)(in_ECX + 0x16bc);
  if (iVar3 < 0xd) {
    *(ushort *)(in_ECX + 0x16b8) =
         *(ushort *)(in_ECX + 0x16b8) | (short)param_2 + -4 << ((byte)iVar3 & 0x1f);
    *(int *)(in_ECX + 0x16bc) = iVar3 + 4;
  }
  else {
    uVar4 = (short)param_2 - 4;
    *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar4 << ((byte)iVar3 & 0x1f);
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b8);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
         *(undefined1 *)(in_ECX + 0x16b9);
    cVar1 = *(char *)(in_ECX + 0x16bc);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xc;
    *(ushort *)(in_ECX + 0x16b8) = uVar4 >> (0x10U - cVar1 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar2 = *(int *)(in_ECX + 0x16bc);
      if (iVar2 < 0xe) {
        *(ushort *)(in_ECX + 0x16b8) =
             *(ushort *)(in_ECX + 0x16b8) |
             *(short *)(in_ECX + 0xa7e + (uint)(byte)(&DAT_00c00a60)[iVar3] * 4) <<
             ((byte)iVar2 & 0x1f);
        *(int *)(in_ECX + 0x16bc) = iVar2 + 3;
      }
      else {
        uVar4 = *(ushort *)(in_ECX + 0xa7e + (uint)(byte)(&DAT_00c00a60)[iVar3] * 4);
        *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar4 << ((byte)iVar2 & 0x1f);
        *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
             *(undefined1 *)(in_ECX + 0x16b8);
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
        *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
             *(undefined1 *)(in_ECX + 0x16b9);
        cVar1 = *(char *)(in_ECX + 0x16bc);
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
        *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + -0xd;
        *(ushort *)(in_ECX + 0x16b8) = uVar4 >> (0x10U - cVar1 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  FUN_00614f90(in_EDX + -1);
  FUN_00614f90(param_1 + -1);
  return;
}

