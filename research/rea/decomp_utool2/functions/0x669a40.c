// rea decompile_all
// name: FUN_00669a40
// address: 0x669a40
// body: available
// range: 0x669a40-0x669c10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00669a40(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  
  iVar1 = in_ECX[9];
  if (iVar1 == 1) {
    in_ECX[10] = 1;
    in_ECX[0xb] = 1;
    goto LAB_00669bba;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if (((char)in_ECX[0x42] == '\0') || (*(char *)((int)in_ECX + 0x109) == '\0')) {
        in_ECX[10] = 4;
        in_ECX[0xb] = 4;
      }
      else {
        if (*(char *)((int)in_ECX + 0x109) != '\x02') {
          *(undefined4 *)(*in_ECX + 0x14) = 0x72;
          *(uint *)(*in_ECX + 0x18) = (uint)*(byte *)((int)in_ECX + 0x109);
          (**(code **)(*in_ECX + 4))();
        }
        in_ECX[10] = 5;
        in_ECX[0xb] = 4;
      }
    }
    else {
      in_ECX[10] = 0;
      in_ECX[0xb] = 0;
    }
    goto LAB_00669bba;
  }
  if ((char)in_ECX[0x40] == '\0') {
    if ((char)in_ECX[0x42] == '\0') {
      piVar2 = (int *)in_ECX[0x31];
      iVar1 = *piVar2;
      iVar3 = piVar2[0x15];
      iVar4 = piVar2[0x2a];
      if (iVar1 == 1) {
        if ((iVar3 != 2) || (iVar4 != 3)) goto LAB_00669b5a;
      }
      else {
        if (((iVar1 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) {
          in_ECX[10] = 2;
          in_ECX[0xb] = 2;
          goto LAB_00669bba;
        }
LAB_00669b5a:
        iVar5 = *in_ECX;
        *(int *)(iVar5 + 0x18) = iVar1;
        *(int *)(iVar5 + 0x1c) = iVar3;
        *(int *)(iVar5 + 0x20) = iVar4;
        *(undefined4 *)(*in_ECX + 0x14) = 0x6f;
        (**(code **)(*in_ECX + 4))();
      }
      in_ECX[10] = 3;
      in_ECX[0xb] = 2;
      goto LAB_00669bba;
    }
    if (*(char *)((int)in_ECX + 0x109) == '\0') {
      in_ECX[10] = 2;
      in_ECX[0xb] = 2;
      goto LAB_00669bba;
    }
    if (*(char *)((int)in_ECX + 0x109) != '\x01') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x72;
      *(uint *)(*in_ECX + 0x18) = (uint)*(byte *)((int)in_ECX + 0x109);
      (**(code **)(*in_ECX + 4))();
    }
  }
  in_ECX[10] = 3;
  in_ECX[0xb] = 2;
LAB_00669bba:
  in_ECX[0xc] = 1;
  in_ECX[0xd] = 1;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0x3ff00000;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0x101;
  *(undefined1 *)((int)in_ECX + 0x4a) = 0;
  in_ECX[0x13] = 2;
  *(undefined1 *)(in_ECX + 0x14) = 1;
  in_ECX[0x15] = 0x100;
  in_ECX[0x1d] = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined1 *)((int)in_ECX + 0x5a) = 0;
  return;
}

