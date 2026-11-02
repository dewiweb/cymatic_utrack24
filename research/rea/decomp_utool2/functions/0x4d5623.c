// rea decompile_all
// name: <lambda_275893d493268fdec8709772e3fcec0e>::operator()
// address: 0x4d5623
// body: available
// range: 0x4d5623-0x4d5742 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_275893d493268fdec8709772e3fcec0e>::operator()(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
<lambda_275893d493268fdec8709772e3fcec0e>::operator()
          (<lambda_275893d493268fdec8709772e3fcec0e> *this)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  sbyte sVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *_Memory;
  uint local_18;
  
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  puVar8 = (uint *)**(int **)this;
  if (puVar8 != (uint *)0x0) {
    local_18 = DAT_00c76070 & 0x1f;
    sVar7 = (sbyte)local_18;
    _Memory = (uint *)((*puVar8 ^ DAT_00c76070) >> sVar7 | (*puVar8 ^ DAT_00c76070) << 0x20 - sVar7)
    ;
    puVar8 = (uint *)((puVar8[1] ^ DAT_00c76070) >> sVar7 |
                     (puVar8[1] ^ DAT_00c76070) << 0x20 - sVar7);
    if ((_Memory != (uint *)0x0) && (puVar9 = puVar8, _Memory != (uint *)0xffffffff)) {
      do {
        sVar7 = (sbyte)local_18;
        bVar2 = 0x20U - sVar7 & 0x1f;
        uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_00c76070;
        do {
          puVar8 = puVar8 + -1;
          if (puVar8 < _Memory) {
            if (_Memory != (uint *)0xffffffff) {
              FID_conflict__free(_Memory);
            }
            bVar2 = 0x20 - ((byte)DAT_00c76070 & 0x1f) & 0x1f;
            uVar4 = (0U >> bVar2 | 0 << 0x20 - bVar2) ^ DAT_00c76070;
            *(uint *)**(undefined4 **)this = uVar4;
            *(uint *)(**(int **)this + 4) = uVar4;
            *(uint *)(**(int **)this + 8) = uVar4;
            goto LAB_004d5734;
          }
        } while (*puVar8 == uVar4);
        uVar10 = *puVar8 ^ DAT_00c76070;
        *puVar8 = uVar4;
        guard_check_icall();
        (*(code *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7))();
        local_18 = DAT_00c76070 & 0x1f;
        uVar10 = *(uint *)**(int **)this ^ DAT_00c76070;
        uVar4 = ((uint *)**(int **)this)[1] ^ DAT_00c76070;
        sVar7 = (sbyte)local_18;
        puVar1 = (uint *)(uVar10 >> sVar7 | uVar10 << 0x20 - sVar7);
        puVar5 = (uint *)(uVar4 >> sVar7 | uVar4 << 0x20 - sVar7);
        if ((puVar1 != _Memory) || (puVar5 != puVar9)) {
          puVar8 = puVar5;
          _Memory = puVar1;
          puVar9 = puVar5;
        }
      } while( true );
    }
  }
LAB_004d5734:
  iVar6 = __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

