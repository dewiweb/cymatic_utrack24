// rea decompile_all
// name: FUN_004f60d0
// address: 0x4f60d0
// body: available
// range: 0x4f60d0-0x4f6329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f60d0(uint param_1,undefined4 param_2,undefined1 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  uint uVar4;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  int iStack_10;
  
  if ((*(uint *)(*(int *)(in_ECX + 0x180) + 0x880) <= param_1) ||
     (piVar1 = *(int **)(*(int *)(*(int *)(in_ECX + 0x180) + 0x878) + param_1 * 4),
     piVar1 == (int *)0x0)) {
    *param_3 = 0;
    return;
  }
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      if (piVar1[1] < 0) {
        if (*(int *)(*(int *)(iVar2 + 4) + 0x24) == 1) {
          iStack_10 = 0;
          *param_3 = 1;
          uStack_14 = 0x4f6292;
          cVar3 = FUN_0040f7c0();
          iStack_10 = 0;
          *param_4 = (uint)(cVar3 != '\0');
          *(undefined4 *)(in_ECX + 0x288) = 3;
          uStack_14 = 0x4f62b5;
          FUN_004f8300();
          return;
        }
        if (*(char *)(iVar2 + 8) != '\0') {
          *param_3 = 0;
          iStack_10 = 1;
          *(undefined4 *)(in_ECX + 0x288) = 7;
          uStack_14 = 0x4f62de;
          FUN_004f8300();
          return;
        }
        *param_3 = 1;
        uVar4 = 0;
        iVar2 = *(int *)(*piVar1 + 0x14);
        if (iVar2 != 0) {
          uVar4 = (iVar2 != *(int *)(*(int *)(*piVar1 + 4) + 0x24)) + 1;
        }
        iStack_10 = 1;
        *param_4 = uVar4;
        *(undefined4 *)(in_ECX + 0x288) = 6;
        uStack_14 = 0x4f6318;
        FUN_004f8300();
        return;
      }
      *param_3 = 1;
      iStack_10 = piVar1[1];
      uStack_14 = 0x4f61fa;
      cVar3 = FUN_0040f7c0();
      *param_4 = (uint)(cVar3 != '\0');
      *(uint *)(in_ECX + 0x288) = (piVar1[1] == *(int *)(*(int *)(*piVar1 + 4) + 0x24) + -1) + 4;
      if ((*(byte *)(in_ECX + 0x1fd) & 0x10) == 0) {
        *(byte *)(in_ECX + 0x1fd) = *(byte *)(in_ECX + 0x1fd) | 0x10;
        iVar2 = *(int *)(in_ECX + 0x1a0);
        if (iVar2 != 0) {
          if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) goto LAB_004f6256;
          if (*(int *)(iVar2 + 0xc) != 0) {
            iStack_10 = 0x4f624b;
            cVar3 = FUN_006e6320();
            if (cVar3 == '\0') goto LAB_004f6256;
          }
        }
        iStack_10 = 0x4f6256;
        FUN_006cc240();
      }
LAB_004f6256:
      FUN_006e6400(auStack_1c);
      FUN_006ce9f0(1);
      *(byte *)(in_ECX + 0x1fc) = *(byte *)(in_ECX + 0x1fc) & 0xef | 8;
      return;
    }
    *param_3 = 0;
    *(undefined4 *)(in_ECX + 0x288) = 2;
    if ((*(byte *)(in_ECX + 0x1fd) & 0x10) == 0) {
      *(byte *)(in_ECX + 0x1fd) = *(byte *)(in_ECX + 0x1fd) | 0x10;
      iVar2 = *(int *)(in_ECX + 0x1a0);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) goto LAB_004f61b9;
        if (*(int *)(iVar2 + 0xc) != 0) {
          iStack_10 = 0x4f61ae;
          cVar3 = FUN_006e6320();
          if (cVar3 == '\0') goto LAB_004f61b9;
        }
      }
      iStack_10 = 0x4f61b9;
      FUN_006cc240();
    }
LAB_004f61b9:
    FUN_006e6400(auStack_1c);
    FUN_006ce9f0(1);
    *(byte *)(in_ECX + 0x1fc) = *(byte *)(in_ECX + 0x1fc) & 0xef | 8;
    return;
  }
  *param_3 = 0;
  *(undefined4 *)(in_ECX + 0x288) = 2;
  if ((*(byte *)(in_ECX + 0x1fd) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x1fd) = *(byte *)(in_ECX + 0x1fd) | 0x10;
    iVar2 = *(int *)(in_ECX + 0x1a0);
    if (iVar2 != 0) {
      if ((*(byte *)(iVar2 + 0x69) & 0x10) != 0) goto LAB_004f6149;
      if (*(int *)(iVar2 + 0xc) != 0) {
        iStack_10 = 0x4f613e;
        cVar3 = FUN_006e6320();
        if (cVar3 == '\0') goto LAB_004f6149;
      }
    }
    iStack_10 = 0x4f6149;
    FUN_006cc240();
  }
LAB_004f6149:
  FUN_006e6400(auStack_1c);
  FUN_006ce9f0(1);
  *(byte *)(in_ECX + 0x1fc) = *(byte *)(in_ECX + 0x1fc) & 0xef | 8;
  return;
}

