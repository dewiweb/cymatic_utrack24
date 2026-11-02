// rea decompile_all
// name: FUN_00451c50
// address: 0x451c50
// body: available
// range: 0x451c50-0x451db0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451c50(void)

{
  code *pcVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  undefined1 local_8 [4];
  
  do {
    uVar2 = FUN_00443260();
    switch(uVar2) {
    case 0:
      return;
    default:
      if (uVar2 - 0x20 < 0x5f) {
        pcVar1 = *(code **)(*in_ECX + 0x14);
        if (pcVar1 == FUN_0062c8e0) {
          local_8[0] = (undefined1)uVar2;
          (**(code **)(*in_ECX + 0x10))(local_8,1);
        }
        else {
          (*pcVar1)(uVar2);
        }
      }
      else if ((-(uint)(uVar2 < 0x10000) & 0xfffffffe) + 4 < 3) {
        FUN_00451b80();
      }
      else {
        iVar3 = 0;
        do {
          FUN_00451b80();
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2);
      }
      break;
    case 7:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c1769c,2);
      break;
    case 8:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c176a0,2);
      break;
    case 9:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c176a8,2);
      break;
    case 10:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c177ac,2);
      break;
    case 0xc:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c176a4,2);
      break;
    case 0xd:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c177a8,2);
      break;
    case 0x22:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c17694,2);
      break;
    case 0x5c:
      (**(code **)(*in_ECX + 0x10))(&DAT_00c17698,2);
    }
  } while( true );
}

